#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;
    vector<vector<int>> nums(n, vector<int>(2, 0));
    for (int i = 0; i < n; ++i) {
        cin >> nums[i][1] >> nums[i][0];
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; ++i) {
        cout << nums[i][1] << " " << nums[i][0] << "\n";
    }

    return 0;
}
