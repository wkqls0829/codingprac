#include <iostream>
#include <deque>
#include <string>

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
        string inst;
        std::cin >> inst;
        if(inst == "push_front"){
            int n;
            std::cin >> n;
            dq.push_front(n);
        } else if(inst == "push_back"){
            int n;
            std::cin >> n;
            dq.push_back(n);
        } else if(inst == "pop_front"){
            if(dq.empty()){
                cout << -1 << "\n";
            } else{
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        } else if(inst == "pop_back"){
            if(dq.empty()){
                cout << -1 << "\n";
            } else{
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        } else if(inst == "size"){
            cout << dq.size() << "\n";
        } else if(inst == "empty"){
            cout << dq.empty() << "\n";
        } else if(inst == "front"){
            if(dq.empty()){
                cout << -1 << "\n";
            } else{
                cout << dq.front() << "\n";
            }
        } else if(inst == "back"){
            if(dq.empty()){
                cout << -1 << "\n";
            } else{
                cout << dq.back() << "\n";
            }
        }
    }
    return 0;
}
