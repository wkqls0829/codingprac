#include <iostream>
#include <vector>
#include <cmath>
#include <set>

using namespace std;

int gcm(int a, int b)
{
    int ao, bo;
    ao = a;
    bo = b;
    if(b > a){
        int temp = a;
        a = b;
        b = temp;
    }
    int q = a/b, r = a%b;
    while(r){
        a = b;
        b = r;
        q = a/b;
        r = a%b;
    }
    return b;
}

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

vector<int> factorization(int N)
{
    int num = 2;
    vector<int> toreturn;
    mem_prime.push_back(true);
    mem_prime.push_back(true);
    while(N!=1){
        if(N%num==0){
            toreturn.push_back(num);
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

    return toreturn;
}

int main(void)
{
    int n;
    std::cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    vector<int> diff;
    for (int i = 1; i < n; ++i) {
        diff.push_back(abs(nums[0] - nums[i]));
    }
    int divisor = diff[0];
    for (int i = 1; i < diff.size(); ++i) {
        divisor = gcm(divisor, diff[i]);
    }
    vector<int> factors = factorization(divisor);
    set<int> answers;

    return 0;
}
