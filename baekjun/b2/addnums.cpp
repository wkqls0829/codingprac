#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;
    char nums[N+1];
    std::cin >> nums;
    int sum = 0;
    for (int i = 0; i < N; ++i) {
        sum += nums[i] - 48;
        
    }
    std::cout << sum << std::endl;
    return 0;
}
