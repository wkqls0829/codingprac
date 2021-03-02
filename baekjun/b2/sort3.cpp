#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    std::cin >> n;

    int nums[10001] = {0};
    for (int i = 0; i < n; ++i) {
        int temp;
        std::cin >> temp;
        nums[temp]++;
    }
    for (int i = 1; i < 10001; ++i) {
        if(nums[i]){
            for (int j = 0; j < nums[i]; ++j) {
                cout << i << '\n';
                
            }
        }
    }
    return 0;
}
