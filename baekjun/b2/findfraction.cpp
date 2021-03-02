#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    long long N, i;
    cin >> N;

    for (i = 1; (i*i + i)/2 < N; ++i);
    long long gap = N - (i*i - i)/2;
    if(i%2== 0){
        cout << gap << '/' << i - gap + 1 << endl;
    } else{
        cout << i - gap + 1 << '/' << gap << endl;
    }
    return 0;
}
