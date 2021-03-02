#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int mem[500][500];
int K;
vector<int> files(500, 0);

int concat(int start, int end){
    if(mem[start][end]){
        return mem[start][end];
    }
    if(start==end){
        return 0;
    }

    vector<int> times;
    for(int i = start; i < end; i++){
        times.push_back(concat(start, i)+concat(i+1, end));
    }
    int sum = 0;
    for (int i = start; i <= end; ++i) {
        sum+=files[i];
    }
    mem[start][end] = *min_element(times.begin(), times.end())+sum;
    return mem[start][end];
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    std::cin >> T;
    for (int t = 0; t < T; ++t) {
        std::cin >> K;
        for (int i = 0; i < 500; ++i) {
            fill(mem[i], mem[i]+500, 0);
        }
        for (int i = 0; i < K; ++i) {
            std::cin >> files[i];
        }
        cout << concat(0, K-1) << "\n";
    }
    return 0;
}
