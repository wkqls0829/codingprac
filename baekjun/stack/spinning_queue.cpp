#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

struct PTR{
    int num;
    int N;
    PTR(int a, int b){
        num = a;
        N = b;
        if(num >= b){
            num = 0;
        }
    }
    void operator++(int){
        num++;
        if(num>=N){
            num = 0;
        }
    }
};

int main(void)
{
    int N, M;
    std::cin >> N >> M;
    deque<int> dq;
    for (int i = 1; i <= N; ++i) {
        dq.push_back(i);
    }
    PTR ptr(0, N);
    int count = 0;
    for (int i = 0; i < M; ++i) {
        int n;
        std::cin >> n;
        int move = 0;
        while(dq[ptr.num]!=n){
            ptr++;
            move++;
        }
        count += min(move, (int)(dq.size() - move));
        dq.erase(dq.begin() + ptr.num);
        ptr = PTR(ptr.num, dq.size());
    }
    std::cout << count << std::endl;
    return 0;
}
