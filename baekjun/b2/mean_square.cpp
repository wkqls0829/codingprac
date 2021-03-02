#include <iostream>

using namespace std;

int main(void){
    int sum = 0;
    int temp;
    for(int i = 0;i < 5; i++){
        cin >> temp;
        if (temp < 40){
            temp = 40;
        }
        sum += temp;
    }
    cout << sum / 5;
    return 0;
    
}
