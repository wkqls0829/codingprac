#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;
    vector<vector<long long>> mem(n, vector<long long>(2, 0));
    vector<int> stairs(n, 0);
    for (int i = 0; i < n; ++i) {
        std::cin >> stairs[i];
    }
    if(n == 1){
        cout << stairs[0] << endl;
        return 0;
    }
    mem[0][0] = stairs[0];
    mem[1][0] = stairs[1];
    mem[1][1] = mem[0][0] + stairs[1];
    for (int i = 2; i < n; ++i) {
        mem[i][0] = max(mem[i-2][0], mem[i-2][1]) + stairs[i];
        mem[i][1] = mem[i-1][0] + stairs[i];
    }
    cout << max(mem[n-1][0], mem[n-1][1]) << endl;

    return 0;
}
