#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{
    clock_t start = clock();

    int M, N;
    std::cin >> M >> N;
        
    bool notprime[1000001] = {true, true};
    for (int i = 2; i < 33; ++i) {
        if(!notprime[i]){
            for (int j = 2; i*j <= 1001; ++j) {
                notprime[i*j] = true;
            }
        }
    }

    for (int i = 2; i < sqrt(N) + 2; ++i) {
        if(!notprime[i]){
            for (int j = (M/i) * i > 2*i? (M/i)*i: 2*i; j <= N; j+=i) {
                notprime[j] = true;
            }
        }
    }
    for (int i = M; i <= N; ++i) {
        if(!notprime[i]){
            std::cout << i << "\n";
        }
    }
//    cout << (double)(clock() - start)/CLOCKS_PER_SEC << endl;
    return 0;
}
