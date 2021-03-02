#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;

    int* chubby[n];
    for (int i = 0; i < n; ++i) {
        chubby[i] = new int[3];
        std::cin >> chubby[i][0] >> chubby[i][1];
        chubby[i][2] = 1;
        
        
    }
    for(int* chuba: chubby){
        for(int* chubb: chubby){
            if(chubb[0] > chuba[0] && chubb[1] > chuba[1]){
                chuba[2]++;
            }
        }
        cout << chuba[2] << " ";
    }
    return 0;
}
