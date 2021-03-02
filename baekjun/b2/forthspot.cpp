#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a[6];
    for (int i = 0; i < 6; ++i) {
        std::cin >> a[i];
        
    }
    int first, second;
    if(a[0] == a[2]){
        first = a[4];
    } else if(a[0] == a[4]){
        first = a[2];
    } else{
        first = a[0];
    }
    if(a[1] == a[3]){
        second = a[5];
    } else if(a[1] == a[5]){
        second = a[3];
    } else{
        second = a[1];
    }
    cout << first << " " << second << endl;
    return 0;
}
