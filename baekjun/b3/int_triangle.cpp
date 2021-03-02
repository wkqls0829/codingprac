#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    int n;
    std::cin >> n;

    std::vector<std::vector<long long>> triangle;
    std::vector<std::vector<long long>> mem;
    for (int i = 0; i < n; ++i) {
        triangle.push_back(std::vector<long long>(n, 0));
        mem.push_back(std::vector<long long>(n, 0));
        for (int j = 0; j <= i; ++j) {
            std::cin >> triangle[i][j];
        }
    }
    mem[0][0] = triangle[0][0];
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            if(!j){
                mem[i][j] = mem[i-1][j] + triangle[i][j];
            } else if(j == i){
                mem[i][j] = mem[i-1][j-1] + triangle[i][j];
            } else{
                mem[i][j] = std::max(mem[i-1][j], mem[i-1][j-1]) + triangle[i][j];
            }

        }
    }
    long long max_val = 0;
    for (int i = 0; i < n; ++i) {
        if(mem[n-1][i] > max_val){
            max_val = mem[n-1][i];
        }
    }
    std::cout << max_val << std::endl;
    return 0;
}
