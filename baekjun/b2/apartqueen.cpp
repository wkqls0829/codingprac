#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    long long* apartment[15];
    for (int i = 0; i < 15; ++i) {
        apartment[i] = new long long[15];
        apartment[0][i] = i;
    } 
    for (int i = 1; i < 15; ++i) {
        int sum = 0;
        for (int j = 0; j < 15; ++j) {
            sum += apartment[i - 1][j];
            apartment[i][j] = sum;
        }
        
    }
    int T;
    std::cin >> T;
    for (int i = 0; i < T; ++i) {
        int k, n;
        std::cin >> k >> n;
        cout << apartment[k][n] << endl;
    }

    return 0;
}
