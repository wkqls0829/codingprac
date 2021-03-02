#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    string S;
    std::cin >> S;
    int alphabet[26];
    fill(alphabet, alphabet+26, -1);
    for (int i = S.size()-1; i >= 0; --i) {
        alphabet[S.at(i) - 97] = i;
    }    
    for (int i = 0; i < 26; ++i) {
        cout << alphabet[i] << " ";
    }
    return 0;
}
