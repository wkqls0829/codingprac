#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    int n;
    std::cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    int count = 1;
    stack<int> st;
    vector<char> toprint;
    for (int i = 0; i < n; ++i) {
        while(1){
            if(!st.empty() &&st.top() == nums[i]){
                st.pop();
                toprint.push_back('-');
                break;
            }
            if(count > n){
                break;
            }
            st.push(count);
            toprint.push_back('+');
            count++;
        }
    }
    if(!st.empty()){
        std::cout << "NO" << std::endl;
        return 0;
    }
    for(char c: toprint){
        std::cout << c << "\n";
    }
    
    return 0;
}
