#include <iostream>
#include <vector>

int main(void)
{
    int N;
    std::cin >> N;
    std::vector<long long> mem(N+1, 0);
    mem[1] = mem[0] = 1;
    for (int i = 2; i < N+1; ++i) {
        mem[i] = mem[i-1] + mem[i-2];
    }
    std::cout << mem[N] % 15746 << std::endl;
    return 0;
}
