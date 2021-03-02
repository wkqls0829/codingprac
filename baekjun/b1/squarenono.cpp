#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main(void){
    long long min, max;
    cin >> min >> max;
    int max_square = (int)sqrt(max);
    bool* result = new bool[1000001];
	fill_n(result, 1000001, true);
    
    for (long long i = 2; i <= max_square; ++i){
        long long isquare = i*i;
        long long min_i = ceil(min / isquare);
        if(min_i * isquare < min){
            ++min_i;
        }
        for(long long j = min_i * isquare; j <= max; j = ++min_i * isquare){
           result[j - min] = false; 
        }
    }
    int true_count = 0;
    for(int i = 0; i <= max-min; ++i){
        true_count += result[i];
    }
    cout << true_count << endl;
    
}
