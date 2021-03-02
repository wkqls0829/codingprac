#include <iostream>
#include <cmath>
#include <vector>

#define DIV 1000000

using namespace std;
long long N, B;

vector<vector<long long>> mat_mul(vector<vector<long long>> mat_a, vector<vector<long long>> mat_b){
    vector<vector<long long>> result(N, vector<long long>(N, 0));

    for (long long i = 0; i < N; ++i) {
        for (long long j = 0; j < N; ++j) {
            for (long long k = 0; k < N; ++k) {
                result[i][k] += (mat_a[i][j] * mat_b[j][k])%DIV;
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
                result[i][k] += (mat_a[i][j] * mat_a[j][k])%DIV;
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
    std::cin >> B;
    N=2;
    if(B==0){
        std::cout << 0 << std::endl;
        return 0;
    }
    if(B==1){
        std::cout << 1 << std::endl;
        return 0;
    }
    B--;
    vector<vector<long long>> mat_a(N, vector<long long>(N, 0));

    vector<vector<long long>> result(N, vector<long long>(N, 0));

    mat_a[0] = {1, 1};
    mat_a[1] = {1, 0};

    result = mat_pow(mat_a, B);
    std::cout << result[0][0]%DIV << std::endl;
    return 0;
}
