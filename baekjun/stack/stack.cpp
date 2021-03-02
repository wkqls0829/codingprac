#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;
    stack<int> st;
    for (int i = 0; i < n; ++i) {
        string input;
        std::cin >> input;
        if(input == "push"){
            int num;
            std::cin >> num;
            st.push(num);
        } else if(input == "top"){
            if(st.empty()){
                cout << -1 << "\n";
            } else{
                std::cout << st.top() << std::endl;
            }
        } else if(input == "size"){
            std::cout << st.size() << std::endl;
        } else if(input == "empty"){
            std::cout << st.empty() << std::endl;
        } else if(input == "pop"){
            if(st.empty()){
                std::cout << -1 << std::endl;
                continue;
            }
            std::cout << st.top() << std::endl;
            st.pop();
        }
        
    }
    return 0;
}
