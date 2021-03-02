#include <iostream>
#include <vector>

using namespace std;

vector<vector<long long>> mem(1001, vector<long long>());

long long bino_coef(int n, int k){
    if(k==0 || n==k){
        return 1;
    }
    if(!mem[n][k]){
        mem[n][k] = bino_coef(n-1, k) + bino_coef(n-1, k-1) % 10007;
    }
    return mem[n][k];
}

int main(void)
{
    int N, K;
    std::cin >> N >> K;
    for (int i = 0; i < 1001; ++i) {
        mem[i] = vector<long long>(i+1, 0);
    }
    cout << bino_coef(N, K) % 10007 << endl;
    return 0;
}
