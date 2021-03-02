#include <iostream>
#include <vector>

using namespace std;

int N;
int** board;
int count = 0;
vector<int> record;

void printboard(){
    vector<int> boardy(N*N, 0);
    for(int i : record){
        boardy[i] = 1;
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << boardy[i*N + j];
            
        }
        cout << endl;
    }
    cout << endl;
}
void putonboard(int x, int y, int reverse = 1){
    for (int i = 0; i < N; ++i) {
        board[x][i]+=reverse;
        board[i][y]+=reverse;
    }
    board[x][y]-=reverse;
    int a = x, b = y;
    for(int i = 1; a-i >= 0 && b-i >= 0; i++){
        board[a-i][b-i]+=reverse;
    }
    for (int i = 1; a-i >= 0 && b + i < N; ++i) {
        board[a-i][b+i]+=reverse;
    }
    for (int i = 1; a + i < N && b + i < N; ++i) {
        board[a+i][b+i]+=reverse;
    }
    for (int i = 1; a + i < N && b - i >= 0; ++i) {
        board[a+i][b-i]+=reverse;
    }
    return;
}

void putqueen(int m, int from){
    cout << from << endl;
    if(!m){
        count++;
        return;
    }
    for (int i = from / N; i < N; ++i) {
        for (int j = from % N;j < N;j++) {
            if(!board[i][j]){
                putonboard(i,j);
                record.push_back(i*N + j);
                printboard();
                putqueen(m - 1, i *N + j + 1);
                record.pop_back();
                putonboard(i,j,-1);
            }
        }
        
    }
}


int main(int argc, char *argv[])
{
    std::cin >> N;
    board = new int*[N];
    for (int i = 0; i < N; ++i) {
        board[i] = new int[N];
    }
    putqueen(N, 0);
    std::cout << count << std::endl;
    return 0;
}
