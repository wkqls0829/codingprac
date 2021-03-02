#include <iostream>
#include <vector>

int main(void)
{
    int T;
    std::cin >> T;
    for (int i = 0; i < T; ++i) {
        int N;
        std::cin >> N;
        std::vector<long long> mem(N + 10, 0);
        mem[4] = mem[5] = mem[6] = 1;
        mem[7] = mem[8] = 2;
        for (int i = 9; i < N+4; ++i) {
            mem[i] = mem[i-1] + mem[i-5];
        }
        std::cout << mem[N + 3] << std::endl;
    }
    return 0;
}
