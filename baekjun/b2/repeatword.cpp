#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    int T;
    std::cin >> T;
    for (int i = 0; i < T; ++i) {
        int R;
        std::cin >> R;
        string S;
        std::cin >> S;
        for (string::iterator it = S.begin(); it != S.end(); ++it) {
           for (int j = 0; j < R; ++j) {
               cout << *it;
               
           } 
        }
        cout << endl;
        
    }
    return 0;
}
