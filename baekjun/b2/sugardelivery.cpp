#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    int i;
    for(i = n/5; i >= 0; i-- ){
        if((n - 5*i) % 3 == 0){
            cout << i + (n-5*i)/3 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
