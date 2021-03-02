#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;
    vector<vector<long long>> mem(n+1, vector<long long>(10, 0));
    for (int i = 0; i < 10; ++i) {
        mem[1][i] = 1;
    }
    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j < 9; ++j) {
            mem[i][j] += mem[i-1][j-1]%1000000000;
            mem[i][j] += mem[i-1][j+1]%1000000000;
        }
        mem[i][0] += mem[i-1][1]%1000000000;
        mem[i][9] += mem[i-1][8]%1000000000;
    }
    long long sum = 0;
    for (int i = 1; i < 10; ++i) {
        sum += mem[n][i];
    }
    std::cout << sum%1000000000 << std::endl;
    return 0;
}
