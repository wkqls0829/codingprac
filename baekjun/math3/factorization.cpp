#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<bool> mem_prime(2, false);

bool isprime(int n){
    if(n < mem_prime.size()){
        return mem_prime[n];
    }
    for (int i = 2; i <= sqrt(n) + 1; ++i) {
        if(mem_prime[i]){
            if(n%i==0){
                return false;
            }
        }
    }
    return true;
}

int main(void)
{
    int N;
    int num = 2;
    std::cin >> N;
    mem_prime.push_back(true);
    mem_prime.push_back(true);
    while(N!=1){
        if(N%num==0){
            std::cout << num << "\n";
            N/=num;
        } else{
            num++;
            while(!isprime(num)){
                mem_prime.push_back(false);
                num++;
            }
            mem_prime.push_back(true);
        }
    }

    return 0;
}
