#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums, nums+3);
    cout << nums[1];
    return 0;
}
