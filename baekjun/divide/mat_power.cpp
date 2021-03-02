#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
long long N, B;

vector<vector<long long>> mat_mul(vector<vector<long long>> mat_a, vector<vector<long long>> mat_b){
    vector<vector<long long>> result(N, vector<long long>(N, 0));

    for (long long i = 0; i < N; ++i) {
        for (long long j = 0; j < N; ++j) {
            for (long long k = 0; k < N; ++k) {
                result[i][k] += (mat_a[i][j] * mat_b[j][k])%1000;
            }
        }
    }
    return result;
}

vector<vector<long long>> mat_mul(vector<vector<long long>> mat_a){
    vector<vector<long long>> result(N, vector<long long>(N, 0));

    for (long long i = 0; i < N; ++i) {
        for (long long j = 0; j < N; ++j) {
            for (long long k = 0; k < N; ++k) {
                result[i][k] += (mat_a[i][j] * mat_a[j][k])%1000;
            }
        }
    }
    return result;
}

vector<vector<long long>> mat_pow(vector<vector<long long>> mat, long long pow){
    if(pow==1){
       return mat;
    } 
    vector<vector<long long>> toreturn(mat_pow(mat_mul(mat), pow/2));
    if(pow%2){
       toreturn = mat_mul(toreturn, mat);
    }
    return toreturn;
}

int main(void)
{
    std::cin >> N >> B;
    vector<vector<long long>> mat_a(N, vector<long long>(N, 0));

    vector<vector<long long>> result(N, vector<long long>(N, 0));

    for (long long i = 0; i < N; ++i) {
        for (long long j = 0; j < N; ++j) {
            std::cin >> mat_a[i][j];
        }
    }

    result = mat_pow(mat_a, B);

    for (long long i = 0; i < N; ++i) {
        for (long long j = 0; j < N; ++j) {
            cout << result[i][j] %1000 << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
