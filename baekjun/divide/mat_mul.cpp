#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(void)
{
    int N,M,K;
    std::cin >> N >> M;
    vector<vector<int>> mat_a(N, vector<int>(M, 0));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cin >> mat_a[i][j];
        }
    }
    std::cin >> M >> K;
    vector<vector<int>> mat_b(M, vector<int>(K, 0));

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < K; ++j) {
            std::cin >> mat_b[i][j];
        }
    }

    vector<vector<int>> result(N, vector<int>(K, 0));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            for (int k = 0; k < K; ++k) {
                result[i][k] += mat_a[i][j] * mat_b[j][k];
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < K; ++j) {
            cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
