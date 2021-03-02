#include <iostream>

using namespace std;

int main(void)
{
    int a, b, ao, bo;
    std::cin >> a >> b;
    ao = a;
    bo = b;
    if(b > a){
        int temp = a;
        a = b;
        b = temp;
    }
    int q = a/b, r = a%b;
    while(r){
        a = b;
        b = r;
        q = a/b;
        r = a%b;
    }
    cout << b << endl;
    cout << ao * bo / b << endl; 
    return 0;
}
