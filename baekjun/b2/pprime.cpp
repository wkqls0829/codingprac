#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int N, M;
    std::cin >> N >> M;
        
    bool notprime[10001] = {true, true};

    for (int i = 2; i < 101; ++i) {
        if(!notprime[i]){
            for (int j = 2; i*j < 10001; ++j) {
                notprime[i*j] = true;
            }
        }
    }
    int sum = 0;
    int first = 0;
    for (int i = N; i <= M; ++i) {
        if(!notprime[i]){
            if(!first){
                first = i;
            }
            sum += i;
        }
    }
    if(!sum){
        std::cout << -1 << std::endl;
        return 0;
    }
    std::cout << sum << std::endl;
    std::cout << first << std::endl;
    return 0;
}
