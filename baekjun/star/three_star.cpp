#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N;
    std::cin >> N;
    for (int i = N; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
