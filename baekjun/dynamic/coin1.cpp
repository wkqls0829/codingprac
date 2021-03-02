#include <iostream>

#define MAX_COIN 1000000

using namespace std;



int N, K;
int coinval[101] = {0};
int** mem;

int pay(int n, int k){
    if(mem[n][k]){
        return mem[n][k];
    }
    if(k==0){
        return 1;
    } else if(k<0){
        return 0;
    }
    if(n==0){
        return 0;
    }
    int sum = 0;
    for(int i = 0; i <= k; i+=coinval[n-1]){
        sum += pay(n-1, k-i);
    }
    mem[n][k] = sum;
    return sum;
} 

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    std::cin >> N >> K;
    for (int i = 0; i < N; ++i) {
        cin >> coinval[i];
    }
    for (int i = 0; i < 101; ++i) {
        mem[i] = new int[10001];
    }
    std::cout << pay(N, K) << std::endl;
    return 0;
}
