#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool desc(char a, char b){
    return a > b;
}

int main(int argc, char *argv[])
{
    string inputs;
    std::cin >> inputs;
    sort(inputs.begin(), inputs.end(), desc);
    cout << inputs << endl;
    return 0;
}
