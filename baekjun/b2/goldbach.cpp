#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    bool notprime[10001] = {true, true};
    for (int i = 2; i <= sqrt(10000); ++i) {
       if (!notprime[i]) {
          for (int j = 2; i*j <= 10000; ++j) {
              notprime[i*j]=true;
          } 
       } 
    }
    int T;
    std::cin >> T;
    for (int i = 0; i < T; ++i) {
        int n;
        std::cin >> n;
        vector<int> small_primes;
        vector<int> large_primes;
        for (int i = 0; i <= n/2; ++i) {
            if(!notprime[i]){
                small_primes.push_back(i);
            }
            if(!notprime[n/2 + i]){
                large_primes.push_back(n/2+i);
            }
        }
        int diff = 100000;
        int pair[2] = {0};
        for(int sp: small_primes){
            for(int lp: large_primes){
                if(sp+lp==n){
                    if(lp - sp < diff){
                        diff = lp - sp;
                        pair[0] = sp;
                        pair[1] = lp;
                    }
                } else if(sp+lp > n){
                    break;
                }
            }
        }
        cout << pair[0] << " " << pair[1] << endl;
    }
    return 0;
}
