#include <iostream>
#include <string>
using namespace std;

int main(void){
    int N;
    cin >> N;
    string stars;
    for(int i = 1; i < 2*N; i++){
        if (i <= N){
            stars.push_back('*');
        } else{
            stars.pop_back();
        }
        cout << stars << endl;
    }
    return 0;
}
