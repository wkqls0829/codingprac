#include <iostream>
#include <vector>

int main(void)
{
    int n;
    std::cin >> n;
    std::vector<long long> fibo(n + 1, 0);
    if(n == 0) {
        std::cout << 0 << std::endl;
        return 0;
    }
    fibo[1] = 1;
    for (int i = 2; i <= n; ++i) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    std::cout << fibo[n] << std::endl;
    return 0;
}
