#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, c;
    cin >>a>>b>>c;
    for(;a||b||c;cin>>a>>b>>c){
        if(b>=a && b>=c){
            int temp = c;
            c = b;
            b = temp;
        } else if(a >= b && a >= c){
            int temp = a;
            a = c;
            c = temp;
        }
        if(a*a + b*b == c*c){
            cout << "right" << endl;
        } else{
            cout << "wrong" << endl;
        }
    }
    return 0;
}
