#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a = 1;
    int b = 1;
    std::cin >> a >> b;
    a ^= b;
    cout << a << endl;
    return 0;
}
