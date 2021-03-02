#include <iostream>
#include <string>
using namespace std;

int main(void){
    int n;
    cin >> n;
    string firstrow, secondrow;
    for(int i = 0; i < n; i++){
        if (i % 2) {
            firstrow += ' ';
            secondrow += '*';
        } else{
            firstrow += '*';
            secondrow += ' ';
        }
    }
    for(int i = 0; i < n; i++){
        cout << firstrow << endl;
        cout << secondrow << endl;
    }
    return 0;
}
