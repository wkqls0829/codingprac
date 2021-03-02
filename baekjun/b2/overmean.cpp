#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    int c;
    cin >> c;
    for (int i = 0; i < c; i++) {
        int n;
        cin >> n;
        int scores[n];
        float sum = 0;
        for (int j = 0; j < n; ++j) {
            cin >> scores[j]; 
            sum += scores[j];
        }
        float mean = sum / n;
        int count = 0;
        for (int j = 0; j < n; j++){
            if (scores[j] > mean){
                count += 1;
            }
        }
        printf("%.3f%%\n",round(float(count) / n * 100000) / 1000);


    }
}
