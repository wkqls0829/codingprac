#include <iostream>

using namespace std;

int main(void)
{
    int N;
    std::cin >> N;
    int sum = 0;
    sum += N/5 + N/25 + N/125;
    std::cout << sum << std::endl;
    return 0;
}
