#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    long long N;
    cin >> N;
    if(N==1) {
        cout << 1 << endl;
        return 0;
    }
    long long mink = sqrt(N/3) - 1;
    long long i = 0;
    for(i= mink; i*i*3 + 3*i + 1 < N; i++);
    cout << i + 1 << endl;
    return 0;
}
