#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void)
{
    string str;
    getline(cin, str);
    while(str!="."){
        stack<char> st;
        bool VPS = true;
        for(auto c : str){
            if(c=='('){
                st.push(c);
            } else if(c==')'){
                if(st.empty() || st.top() != '('){
                    VPS = false;
                    break;;
                } else{
                    st.pop();
                }
            }else if(c=='['){
                st.push(c);
            } else if(c==']'){
                if(st.empty() || st.top() != '['){
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
            std::cout << "yes" << std::endl;
        } else{
            std::cout << "no" << std::endl;
        }
        getline(cin, str);
    }

        
    return 0;
}
