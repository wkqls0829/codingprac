#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main(void)
{
    int T;
    std::cin >> T;
    for (int t = 0; t<T;t++) {
        int n;
        std::cin >> n; 
        map<string, int> closet;
        for (int i = 0; i < n; ++i) {
            string a, b;
            std::cin >> a >> b;
            if(closet.find(b) == closet.end()){
                closet[b] = 1;
            } else{
                closet[b]++;
            }
        }
        long long days = 1;
        for(auto c : closet){
            days*=c.second + 1;
        }
        std::cout << days - 1 << std::endl;
    }
    return 0;
}
