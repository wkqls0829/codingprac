#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    long long a,b, v;
    cin >> a >> b >> v;
    if ((v-a) % (a - b) == 0){
        cout << (v - a)/(a - b) + 1;
    } else{
        cout << (v - a)/(a - b) + 2;
    }
    return 0;
}
