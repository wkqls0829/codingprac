#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    string s;

    std::cin >> s;
    int wordcount[70] = {0};
    for(const char& c: s){
        wordcount[c-65] += 1;
    }
    for (int i = 0; i < 26; ++i) {
        wordcount[i] += wordcount[i + 32];
    }
    int max = *max_element(wordcount, wordcount+26);
    int max_pos = -1;
    for (int i = 0; i < 26; ++i) {
        if (wordcount[i] == max){
            if (max_pos == -1) {
                max_pos = i;
            } else{
                cout << "?" << endl;
                return 0;
            }
        } 
    }
    cout << (char)(max_pos + 65);
    return 0;
}
