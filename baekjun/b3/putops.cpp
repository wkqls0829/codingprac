#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

int N;
vector<int> nums;
int ops[4] ={0};
vector<int> opsorder;
long long max_val = -100000000;
long long min_val = 100000000;

void do_order(int order){
    if(order == N - 1){
        long long sum = nums[0];
        for (int i = 0; i < N-1; ++i) {
            switch (opsorder[i]) {
                case 0:
                    sum += nums[i+1];
                    break;
                case 1:
                    sum -= nums[i+1];
                    break;
                case 2:
                    sum *= nums[i+1];
                    break;
                case 3:
                    sum /= nums[i+1];
                    break;
                    
            }
        }
        if(sum > max_val){
            max_val = sum;
        }
        if(sum < min_val){
            min_val = sum;
        }
        return;
    }
    for (int i = 0; i < 4; ++i) {
        if(ops[i]){
            opsorder[order] = i;
            ops[i]--;
            do_order(order + 1);
            ops[i]++;
            opsorder[order] = -1;
        }
    }
    return;
}

int main(int argc, char *argv[])
{
    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        int temp;
        std::cin >> temp;
        nums.push_back(temp); 
        opsorder.push_back(-1);
    } 
    for (int i = 0; i < 4; ++i) {
        std::cin >> ops[i];
    }
    do_order(0);
    std::cout << max_val << std::endl;
    std::cout << min_val << std::endl;
    return 0;
}
