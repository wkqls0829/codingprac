#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N, K;
    std::cin >> N >> K;
    vector<int> values(N, 0);
    for (int i = 0; i < N; ++i) {
        std::cin >> values[i];
    }
    int count = 0;
    for (int i = N-1; i >= 0; --i) {
        count += K / values[i];
        K = K % values[i];
    }
    std::cout << count << std::endl;
    return 0;
}
