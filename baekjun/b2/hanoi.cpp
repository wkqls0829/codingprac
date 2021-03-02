#include <iostream>
#include <cmath>

using namespace std;
int count = 0;

int movehanoi(int n, int from, int to){
    if(n==1){
        cout << from << ' ' << to << '\n';
        return 1;
    }
    int space = to ^ from;
    return movehanoi(n-1, from, space) + movehanoi(1, from, to) + movehanoi(n-1,space, to);
}
int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;
    std::cout << (int)pow(2, n) - 1 << '\n';
    movehanoi(n,1,3);

    return 0;
}
