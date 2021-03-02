#include <iostream>

using namespace std;

int main(void)
{
    int a, b;
    std::cin >> a >> b;
    while(a && b){
        if(!(a%b)){
            std::cout << "multiple" << std::endl;
        } else if(!(b%a)){
            std::cout << "factor" << std::endl;
        } else{
            std::cout << "neither" << std::endl;
        }
        std::cin >> a >> b;
    }
    return 0;
}
