#include <iostream>

using namespace std;

int main(void){
    int menus[5];
    for (int i = 0; i < 5; i++){
        cin >> menus[i];
    }
    int burgur_min = menus[0];
    if(menus[1] < burgur_min) burgur_min = menus[1];
    if(menus[2] < burgur_min) burgur_min = menus[2];
    int drink_min = menus[3];
    if(menus[4] < drink_min) drink_min = menus[4];
    cout << burgur_min + drink_min - 50;
   
   
    return 0;
}
