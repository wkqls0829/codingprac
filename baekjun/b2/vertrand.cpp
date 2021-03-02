#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;
    bool notprime[250001] = {true, true};
    for (int i = 2; i < sqrt(250000); ++i) {
        if(!notprime[i]){
            for (int j = 2; i*j < 250000; ++j) {
                notprime[i*j] = true;
            }
        }
    }
    while(n){
        int count = 0;
        for (int i = n+1; i <= 2*n; ++i) {
            if(!notprime[i]){
                ++count;
            }
        }
        cout << count<<"\n";

        std::cin >> n; 
    }
    return 0;
}
