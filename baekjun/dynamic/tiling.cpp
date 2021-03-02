#include <iostream>

using namespace std;


int main(void)
{
    int n;
    std::cin >> n;
    int mem[1001];
    mem[0] = mem[1] = 1;
    for (int i = 2; i < 1001; ++i) {
        mem[i] = (mem[i-1] + mem[i-2]) % 10007;
    }
    std::cout << mem[n] << std::endl;
    return 0;
}
