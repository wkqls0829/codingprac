#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int N;

typedef vector<vector<int>> tdvec;
tdvec board;



int main(void)
{
    std::cin >> N;
    board = tdvec(N, vector<int>(N, 0));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> board[i][j];
        }
    }
    
    return 0;
}
