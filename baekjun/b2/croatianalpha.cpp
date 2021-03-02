#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main(int argc, char *argv[])
{
    regex re1("dz=");
    regex re2("c=|c-|dz=|d-|lj|nj|s=|z=");
    string s;
    cin >> s;
    s = regex_replace(s, re1, "1");
    s = regex_replace(s, re2, "2");
    cout << s.size() << endl;
    return 0;
}
