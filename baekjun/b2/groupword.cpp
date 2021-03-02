#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;
    int count = n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        char prev = s.front();
        bool alpha[26] = {false};
        alpha[prev - 97] = true;
        for(char& c: s){
            if(c!=prev){
                if(alpha[c-97]){
                    count -= 1;
                    break;
                } else{
                    alpha[prev - 97] = true;
                }
            }
            prev = c;
        }
        
    }
    std::cout << count << std::endl;
    return 0;
}
