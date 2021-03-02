#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    std::cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }
    int M;
    std::cin >> M;
    vector<int> B(M, 0); 
    for (int i = 0; i < M; ++i) {
        std::cin >> B[i];
    }
    sort(A.begin(), A.end());
    for(int b : B){
        if(binary_search(A.begin(), A.end(), b)){
            std::cout << 1 << "\n";
        }else {
            cout << 0 << "\n";
        }
    }
    return 0;
}
