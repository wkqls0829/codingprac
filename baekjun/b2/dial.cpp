#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    string s;
    cin >> s;
    int sum = 0;
    for(char& c: s){
        if(c < 80){
            sum += (c - 65)/3 + 3;
        } else{
            switch(c){
                case 'P': case 'Q': case 'R': case'S':
                    sum += 8;
                    break;
                case 'T': case 'U': case 'V':
                    sum += 9;
                    break;
                case 'W': case 'X': case 'Y': case'Z':
                    sum += 10;
                    break;
            }
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
