#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    int N;
    std::cin >> N;
    queue<int> qu;
    for (int i = 1; i < N+1; ++i) {
        qu.push(i);
    }
    bool turn = true;
    while(qu.size() != 1){
        if(turn){
            qu.pop();
            turn = false;
        } else{
            qu.push(qu.front());
            qu.pop();
            turn = true;
        }
    }
    std::cout << qu.front() << std::endl;
    return 0;
}
