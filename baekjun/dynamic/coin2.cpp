#include <iostream>

#define MAX_COIN 1000000

using namespace std;



int N, K;
int coinval[101] = {0};
int* mem;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    std::cin >> N >> K;
    for (int i = 0; i < N; ++i) {
        cin >> coinval[i];
    }
    mem = new int[K+1];
    for(int i = 0; i <= K; i+=coinval[0]){
        mem[i] = 1;
    }
    int* tmpmem = new int[K+1];
    for (int i = 1; i < N; ++i) {
        for (int j = 0; j < K+1; ++j) {
            tmpmem[j] = 0;
        }
        for (int j = 0; j<= K;j+=coinval[i]) {
            for (int k = 0; k <= K-j; ++k) {
                tmpmem[k+j] += mem[k];
            }
        }
        for (int j = 0; j < K+1; ++j) {
            mem[j] = tmpmem[j];
        }
    }
    std::cout << mem[K] << std::endl;
    return 0;
}
