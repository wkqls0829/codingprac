#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);
    long long nums[n];
    for (int i = 0; i < n; ++i) {
        int tempa, tempb;
        scanf("%d %d", &tempa,  &tempb);
        nums[i] = (long long)tempa *1000000 + tempb+100000;
    }
    sort(nums, nums+n);
    for(long long num:nums){
        printf("%lld %lld\n", num/1000000 ,num%1000000 - 100000);
    }
    return 0;
}
