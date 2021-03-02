#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    std::cin >> N;
    vector<int> nums(N, 0);
    for (int i = 0; i < N; ++i) {
        std::cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    
    if(N==1){
        std::cout << nums[0]*nums[0] << std::endl;
    } else{
        std::cout << nums[0]*nums[N-1] << std::endl;
    }
    return 0;
}
