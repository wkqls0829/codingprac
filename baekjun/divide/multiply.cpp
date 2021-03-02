#include <iostream>
#include <cmath>

using namespace std;

long long A, B, C;

long long calculate(long long b){
    if(b==1){
        return A;
    }
    long long value = calculate(b/2);
    long long v = value*value %C;
    if(b%2){
        v = v*A%C;
    }
    return v;
}

int main(void)
{
    std::cin >> A >> B >> C;
    A = A % C;

    std::cout << calculate(B) << std::endl;
    return 0;
}
