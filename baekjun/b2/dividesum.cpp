#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;

    int digit = (int)(log10(n)) + 1;
    for (int i = n-digit*10; i < n; ++i) {
        string nums = to_string(i);
        int sum = i;
        for(char c: nums){
            sum+=c-48;
        }
        if(sum == n){
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}
