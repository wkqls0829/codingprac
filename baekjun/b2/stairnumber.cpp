#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    int N;
    cin >> N;
    int count = 0;
    for(int i = 1; i <= N; i++){
        string number = to_string(i);
        string::iterator prior = number.begin();
        int gap = 0;
        if(number.length() == 1){
            count += 1;
            continue;
        }
        gap = *prior - *(prior + 1);
        int toadd = 1;
        for(string::iterator it = prior+1; it != number.end(); it++){
            if(*prior != *it + gap){
                prior = it;
                toadd = 0;
                break;
            } else{
                prior = it;
            }
        }
        count += toadd;
    }
    cout << count << endl;
    return 0;
}
