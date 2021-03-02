#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long N, K;
vector<long long > lans;

long long find(long long l){
    long long sum = 0;
    for(long long k : lans){
        sum+=k/l;
    }
    return sum;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    std::cin >> K >> N;
    lans = vector<long long>(K, 0);
    for (long long i = 0; i < K; ++i) {
        std::cin >> lans[i];
    }
    long long max_val = *max_element(lans.begin(), lans.end());
    long long start = 1, end = max_val;
    long long toprint = 0;
    while(start<=end){
        long long mid = (start+end)/2;
        long long find_mid = find(mid);
        if(find_mid >= N){
            toprint = mid;
            start = mid+1;
        } else{
            end = mid-1;
        }
    }
    std::cout << toprint << std::endl;

    return 0;
}
