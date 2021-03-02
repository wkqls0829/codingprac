#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void)
{
    int T;
    std::cin >> T;
    
    for (int i = 0; i < T; ++i) {
        stack<char> st;
        string str;
        std::cin >> str;
        bool VPS = true;
        for(auto c : str){
            if(c=='('){
                st.push(c);
            } else{
                if(st.empty() || st.top() == ')'){
                    VPS = false;
                    break;;
                } else{
                    st.pop();
                }
            }
        }
        if(!st.empty()){
            VPS = false;
        }
        if(VPS){
            std::cout << "YES" << std::endl;
        } else{
            std::cout << "NO" << std::endl;
        }

        
    }
    return 0;
}
