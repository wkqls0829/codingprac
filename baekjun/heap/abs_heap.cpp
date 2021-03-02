#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>
#include <cmath>

using namespace std;

template <typename T>
class abs_greater{
    public:
    bool operator()(T a, T b){
        if(a+b == 0){
            return a > b;
        }
        return abs(a) > abs(b);
    }
};

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    std::cin >> N;
    priority_queue<int,vector<int>, abs_greater<int>> h;
    for (int i = 0; i < N; ++i) {
        int num;
        std::cin >> num;
        if(num==0){
            if(h.empty()){
                std::cout << 0 << "\n";
            } else{
                std::cout << h.top() << "\n";
                h.pop();
            }
        } else{
            h.push(num);
        }
    }
    return 0;
}
