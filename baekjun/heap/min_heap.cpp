#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    std::cin >> N;
    priority_queue<int,vector<int>, greater<int>> h;
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
