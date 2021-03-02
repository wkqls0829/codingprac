#include<iostream>
#include<string>
using namespace std;

int main(void){
    int N;
    cin >> N;
    char space[2*N];
    for(int i = 0; i < 2*N; i++){
        space[i] = ' ';
    }
    space[2*N] = '\0';
    for(int i = 0; i < 2*N - 1; i++){
        space[i] = '*';
    }
    cout << space << endl;
    for(int i = 0;i <N - 1;i++){
        space[i] = ' ';
        space[2*N - 2 - i] = '\0';
        cout << space << endl;
    }
    for(int i = N - 2;i >= 0;i--){
        space[i] = space[2*N - 2 - i] = '*';
        cout << space << endl;
    }
    return 0;
}
