#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    std::cin >> n;
    for (int j = 0; j < n-1; ++j) {
        cout << " ";
    }
    cout << "*\n";
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-i-2; ++j) {
            cout << " ";
        }
        cout << "*";
        for (int j = 0; j < 2*i+1; ++j) {
            cout << " ";
        }
        cout << "*\n";
    }
    return 0;
}
