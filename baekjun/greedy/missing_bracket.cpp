#include <iostream>
#include <string>
#include <regex>
#include <vector>
#include <cstdlib>

using namespace std;

int main(void)
{
    string expression;
    std::cin >> expression;
    regex opers("[/+/-]");
    int count = 1;
    sregex_iterator it(expression.begin(), expression.end(), opers);
    sregex_iterator end;
    while(it != end){
        if((*it).str(0) == "-"){
            break;
        } else{
            count++;
        }
        it++;
    }
    regex nums("[0-9]+");
    sregex_iterator it2(expression.begin(), expression.end(), nums);
    long long sum = 0;
    int i = 0;
    while(it2 != end){
        int n = atoi((*it2).str(0).c_str());
        if(i < count){
            sum += n;
        } else{
            sum -= n;
        }
        i++;
        it2++;
    }
    cout << sum << endl;
    return 0;
}
