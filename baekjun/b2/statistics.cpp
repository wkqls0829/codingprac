#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    int n;
    std::cin >> n;
    int nums[n];
    int numcount[8001] = {0};
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
        numcount[nums[i] + 4000]++;
        sum += nums[i];
    }
    sort(nums, nums+n);
    int maxi = 0;
    int max = 0;
    int firsti = 1;
    for (int i = 0; i < 8001; ++i) {
        if(numcount[i] == max){
            if(firsti){
                maxi = i;
                firsti = 0;
            }
        }
        if(numcount[i] > max){
            maxi = i;
            max = numcount[i];
            firsti = 1;
        }
    }
    cout << round(sum/n) << endl;
    cout << nums[n/2] << endl;
    cout << maxi-4000 << endl;
    cout << nums[n-1] - nums[0] << endl;
    return 0;
}
