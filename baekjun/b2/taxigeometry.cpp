#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    double r;
    std::cin >> r;
    cout << fixed;
    cout.precision(6);
    cout << r * r * M_PI << endl;
    cout << r * r * 2 << endl;
    return 0;
}
