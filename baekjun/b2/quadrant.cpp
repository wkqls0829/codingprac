#include <iostream>

using namespace std;

int main(void){
    int x, y;
    cin >> x >> y;
    cout << 2 + 2*(y < 0) - (x*y > 0);
    return 0;
}
