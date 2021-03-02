#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    std::cin >> T;
    queue<int> qu;
    for (int i = 0; i < T; ++i) {
        string str;
        std::cin >> str;
        if(str == "push"){
            int n;
            std::cin >> n;
            qu.push(n);
        } else if(str == "pop"){
            if(qu.empty()){
                cout << -1 << "\n";
            } else{
                std::cout << qu.front() << "\n";
                qu.pop();
            }
        } else if(str == "size"){
            std::cout << qu.size() << "\n";
        } else if(str == "empty"){
            std::cout << qu.empty() << "\n";
        } else if(str == "front"){
            if(qu.empty()){
                std::cout << -1 << "\n";
            } else {
                std::cout << qu.front() << "\n";
            }
        } else if(str == "back"){
            if(qu.empty()){
                std::cout << -1 << "\n";
            } else {
                std::cout << qu.back() << "\n";
            }
        }
        
    }
    return 0;
}
