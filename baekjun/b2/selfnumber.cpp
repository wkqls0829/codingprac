#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    bool mem[20000];
    for (int i = 1; i <= 10000; ++i) {
        int self_num = i;
        string string_num = to_string(i);
        for(string::iterator it = string_num.begin(); it != string_num.end(); it++){
            self_num += *it - 48;
        }
        mem[self_num] = true;
    }
    for (int i = 1; i <= 10000; ++i) {
        if(!mem[i]){
            cout << i << endl;
        }
    }
    return 0;
}
