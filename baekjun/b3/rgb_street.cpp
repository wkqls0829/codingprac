#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    int N;
    std::cin >> N;
    std::vector<std::vector<long long>> mem(N, std::vector<long long>(3, 0));
    std::vector<std::vector<long long>> cost(N, std::vector<long long>(3, 0));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cin >> cost[i][j];
        } 
    }
    for (int i = 0; i < 3; ++i) {
        mem[0][i] = cost[0][i];
    }
    for (int i = 1; i < N; ++i) {
        for (int j = 0; j < 3; ++j) {
            mem[i][j] = std::min(mem[i-1][(j+1)%3], mem[i-1][(j+2)%3]) + cost[i][j];
        }
    }
    long long min = 10000000;
    for (int i = 0; i < 3; ++i) {
        if(mem[N-1][i] < min){
            min = mem[N-1][i];
        } 
    }
    std::cout << min << std::endl;
    return 0;
}
