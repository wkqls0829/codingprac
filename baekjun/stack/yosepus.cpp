#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void)
{
    int N, K;
    std::cin >> N >> K;
    queue<int> qu;
    for (int i = 0; i < N; ++i) {
        qu.push(i+1);
    }
    int count = 1;
    vector<int> toprint;
    while(!qu.empty()){
        if(count == K){
            toprint.push_back(qu.front());
            qu.pop();
            count = 1;
        } else{
            qu.push(qu.front());
            qu.pop();
            count++;
        }
    }
    std::cout << '<';
    for (int i = 0; i < N-1; ++i) {
        std::cout << toprint[i] << ", ";
    }
    std::cout << toprint[N-1] << '>' << std::endl;
    return 0;
}
