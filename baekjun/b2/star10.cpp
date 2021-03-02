#include <iostream>

using namespace std;

void blankify(char** univ, int size, int x, int y){
    if(size == 1){
        return;
    }
    for (int i = x+size/3; i < x+2*size/3; ++i) {
        for (int j = y+size/3; j < y+2*size/3; ++j) {
            univ[i][j]=' ';
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            blankify(univ, size/3, x+i*size/3, y+j*size/3);
            
        }
    }
    return;
}

int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;
    char* univ[n];
    for (int i = 0; i < n; ++i) {
        univ[i] = new char[n];
        for (int j = 0; j < n; ++j) {
            univ[i][j] = '*';
        }
    }
    blankify(univ,n,0,0);
    for (int i = 0; i < n; ++i) {
        std::cout << univ[i] << std::endl;
        
    }
    return 0;
}
