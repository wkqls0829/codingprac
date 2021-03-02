#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long N, M;
vector<long long> log;

long long cut_log(long long height){
    long long sum = 0;
    long long i;
    for (i = 0; i < N; ++i) {
        if (log[i] >= height){
            break;
        }
    }
    for (; i < N; i++) {
       sum+=log[i]-height;
    }
    return sum;
}

int main(void)
{
    std::cin >> N >> M;    
    log = vector<long long>(N, 0);
    for (int i = 0; i < N; ++i) {
         std::cin >> log[i];
    }
    sort(log.begin(), log.end());
    long long max_height = *max_element(log.begin(), log.end());
    long long bottom = 0, top = max_height;
    long long toreturn = 0;
    while(bottom <= top){
        long long mid_value = (bottom + top)/2;
        long long log_sum = cut_log(mid_value);
        if(log_sum >= M){
            bottom = mid_value+1;
            toreturn = mid_value;
        } else{
            top = mid_value-1;
        }
    }
    std::cout << toreturn << std::endl;
    return 0;
}
