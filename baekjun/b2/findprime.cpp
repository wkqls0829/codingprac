#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;
        
    bool notprime[1001] = {true, true};

    for (int i = 2; i < 33; ++i) {
        if(!notprime[i]){
            for (int j = 2; i*j < 1001; ++j) {
                notprime[i*j] = true;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < N; ++i) {
        int temp;
        cin >> temp;
        sum += !notprime[temp];
        
    }
    std::cout << sum << std::endl;

    return 0;
}
