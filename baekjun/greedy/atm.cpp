#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    std::cin >> N;
    vector<int> people(N, 0);
    for (int i = 0; i < N; ++i) {
        std::cin >> people[i];
    }
    sort(people.begin(), people.end());
    long long sum = 0;
    for (int i = 0; i < N; ++i) {
        sum += people[i]*(N-i);
    }
    std::cout << sum << std::endl;
    return 0;
}
