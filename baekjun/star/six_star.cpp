#include <iostream>

using namespace std;

int main(void)
{
    int N;
    std::cin >> N;
    for (int i = N-1; i >= 0; --i) {
        for (int j = 0; j < N-i-1; ++j) {
            cout << " ";
        }
        for(int j = 0; j < 2*i+1; ++j){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
