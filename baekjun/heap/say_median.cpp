#include <iostream>
#include <deque>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    std::cin >> N;
    deque<int> dq;
    for (int i = 0; i < N; ++i) {
        int num;
        std::cin >> num;
        auto it = dq.begin();
        int start = 0, end = dq.size()-1;
        int pos = 0;
        while(start <= end){
            int mid = (start + end)/2;
            int mid_num = *(it+mid);
            if(mid_num >= num){
                end = mid -1; 
                pos = mid;
            } else{
                start = mid +1;
            }
        }
        dq.insert(it+(pos-1), num);
        if(dq.size()%2){
            std::cout << dq[dq.size()/2] << "\n";
        } else{
            cout << min(dq[dq.size()/2 - 1], dq[dq.size()/2]) << "\n";
        }
    }
    return 0;
}
