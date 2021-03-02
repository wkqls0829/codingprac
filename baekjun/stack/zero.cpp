#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char *argv[])
{
    int K;
    int sum = 0;
    std::cin >> K;
    stack<int> st;
    for (int i = 0; i < K; ++i) {
        int t;
        std::cin >> t;
        if(!t){
            st.pop();
            continue;
        }
        st.push(t);
    }
    while(!st.empty()){
        sum+=st.top();
        st.pop();
    }
    std::cout << sum << std::endl;
    return 0;
}
