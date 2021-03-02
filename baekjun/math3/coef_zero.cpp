#include <iostream>
#include <algorithm>

int main(void)
{
    long long n, m;
    std::cin >> n >> m;
    long long sum = 0;
    for (long long i = 5; i <= n; i*=5) {
        sum += n/i - (n-m)/i - m/i;
    }
    long long twosum = 0;
    for (long long i = 2; i <= n; i*=2) {
        twosum += n/i - (n-m)/i - m/i;
    }
    std::cout << std::min(sum, twosum) << std::endl;
    return 0;
}
