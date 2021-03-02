#include <iostream>
#include <vector>


using namespace std;

int N;
vector<vector<int>> paper;
int count[3] = {0, 0, 0};

int divide(int x, int y, int n){
    if(n==1){
        count[paper[x][y]+1]++;
        return 1;
    }
    int toreturn = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            toreturn += divide(x+i*n/3, y+j*n/3, n/3);
        }
    }
    if(toreturn == 9){
        bool equal = true;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if(paper[x][y] != paper[x+i*n/3][y+j*n/3]){
                    equal = false;
                    break;
                }
            }
        }
        if(equal){
            toreturn = 1;
            count[paper[x][y]+1] -= 8;
        }
    }
    return toreturn; 
}

int main(void)
{
    std::cin >> N;
    paper = vector<vector<int>>(N, vector<int>(N, 0));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> paper[i][j];
        }
    }
    divide(0,0,N);
    std::cout << count[0] << std::endl;
    std::cout << count[1] << std::endl;
    std::cout << count[2] << std::endl;
    return 0;
}
