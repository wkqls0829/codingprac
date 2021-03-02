#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void)
{
    int t;
    std::cin >> t;
    for (int T = 0; T < t; ++T) {
        int N, M;
        std::cin >> N >> M;
        vector<int> num_priority(10, 0);
        queue<int> qu;
        for (int i = 0; i < N; ++i) {
            int n;
            std::cin >> n;
            num_priority[n]++;
            if(i == M){
                n += 10;
            }
            qu.push(n);
        }
        int largest_priority = 9;
        while(!num_priority[largest_priority]){
            largest_priority--;
        }
        int toprint = 0;
        for (int i = 1; i <= N; ++i) {
            while(true){
                if(qu.front()==largest_priority+10){
                    toprint = i;
                    break;
                }
                if(qu.front()==largest_priority){
                    qu.pop();
                    num_priority[largest_priority]--;
                    while(!num_priority[largest_priority]){
                        largest_priority--;
                    }
                    break;
                }
                qu.push(qu.front());
                qu.pop();

            }
            if(toprint){
                std::cout << toprint << std::endl;
                break;
            }
        }

    }
    return 0;
}
