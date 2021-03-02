#include <iostream>

using namespace std;

int main(void)
{
    long long T;
    std::cin >> T;
    for (long long i = 0; i < T; ++i) {
        long long N, M;
        std::cin >> N >> M;
        long long prev = 0;
        long long current = 1;
        long long ind, temp;
        for (ind = 1; ind < M*M - 1; ++ind) {
            if(!current && prev == 1){
                break;
            }
            temp = current;
            current = (prev + current)%M;
            prev = temp;
        }
        std::cout << N << " " << ind << "\n";
    }
    return 0;
}
