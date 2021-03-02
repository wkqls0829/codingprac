#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>

#define MAX_DISTANCE 10000000000

using namespace std;

long long n;
vector<pair<long long, long long>> coord;

inline long long dist(pair<long long, long long> a, pair<long long, long long> b){
    return (a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second);
}

long long get_closest(long long start, long long end){
    if(start == end){
        return MAX_DISTANCE;
    }
    long long mid = (start + end);
    mid = mid / 2;
    long long closest = min(get_closest(start, mid), get_closest(mid + 1, end));
    long long rightx = coord[mid+1].first;
    for(long long i = mid; i >= start; i--){  
        if(coord[i].first < rightx - closest) break;
        for (long long j = mid+1; j <= end; ++j) {
            if(coord[j].first > coord[i].first + closest){
                break;
            }
            long long this_dist = dist(coord[i], coord[j]);
            if(this_dist < closest){
                closest = this_dist;
            }
        }
    }
    return closest;
}

int main(void)
{
    std::cin >> n;
    
    for (long long i = 0; i < n; ++i) {
        long long tmpa, tmpb;
        std::cin >> tmpa >> tmpb;
        coord.push_back(pair<long long, long long>(tmpa, tmpb));
    }
    sort(coord.begin(), coord.end());

    std::cout << get_closest(0, n-1) << std::endl;
    return 0;
}
