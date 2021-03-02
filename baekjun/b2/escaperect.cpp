#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int x,y,w,h;
    std::cin >> x >> y >> w >> h;
    int minlen = w - x;
    if(minlen > x){
        minlen = x;
    }
    if(minlen > y){
        minlen = y;
    }
    if(minlen > h - y){
        minlen = h-y;
    }
    std::cout << minlen << std::endl;

    return 0;
}
