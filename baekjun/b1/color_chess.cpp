#include <iostream>

using namespace std;

int main(void){
	int N, M;
	cin >> N >> M;
	bool* board[N];
	for(int i = 0; i < N; i++){
		board[i] = new bool[M];
        string temps;
		cin >> temps;
        for (int j = 0; j < M; ++j) {
            if(temps[j] == 'B'){
                board[i][j] = true;
            }
        }
	}
    bool* mask[8];
    for (int i = 0; i < 8; ++i) {
        mask[i] = new bool[8];
        for (int j = 0;j < 8;j++) {
            mask[i][j] =(i+j)%2;
            
        }
        
    }
    int* boardsum1[N-7];
    int* boardsum2[N-7];
    for (int i = 0; i < N-7; ++i) {
        boardsum1[i] = new int[M-7];
        boardsum2[i] = new int[M-7];
        for (int j = 0; j < M-7; ++j) {
            int sum1 = 0;
            int sum2 = 0;
            for (int ib = 0; ib < 8; ++ib) {
                for (int jb = 0; jb < 8; ++jb) {
                    sum1 += (ib+jb)%2 ^ board[i+ib][j+jb];
                    sum2 += (ib+jb + 1)%2 ^ board[i+ib][j+jb];
                }
            }
            boardsum1[i][j] = sum1;
            boardsum2[i][j] = sum2;
        }
    }
    int min = 65;
    for (int i = 0; i < N-7; ++i) {
        for (int j = 0; j < M-7; ++j) {
            if(boardsum1[i][j] < min){
                min = boardsum1[i][j];
            }
            if(boardsum2[i][j] < min){
                min = boardsum2[i][j];
            }
            
        }
        
    }
    cout << min << endl;
	return 0;
}
