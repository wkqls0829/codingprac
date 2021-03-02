#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    int N;
    std::cin >> N;
    vector<int> students(N, 0);
    for (int i = 0; i < N; ++i) {
        std::cin >> students[i];
    }
    int B, C;
    cin >> B>>C;
    for (int i = 0; i < N; ++i) {
        students[i] -= B;
        if(students[i] < 0){
            students[i] = 0;
        }
    }
    long long sum = N;
    for (int i = 0; i < N; ++i) {
        sum += ceil(students[i]/C);
        std::cout << ceil((float)students[i]/C) << std::endl;
    }
    std::cout << sum << std::endl;
    return 0;
}
