#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;



int main(void)
{
    int N;
    std::cin >> N;
    vector<vector<long long>> conf(N, vector<long long>(3, 0));
    for (int i = 0; i < N; ++i) {
        std::cin >> conf[i][1] >> conf[i][2];
        conf[i][0] = conf[i][2] - conf[i][1];
    }
    sort(conf.begin(), conf.end());
    for(auto c : conf){
        std::cout << c[0] << c[1] << c[2] << std::endl;
    }
    set<long long> mem;
    long long count = 0;
    for(vector<long long> c : conf){
        bool possible = true;
        for(long long i = c[1]; i < c[2]; i++){
            if(mem.find(i) != mem.end()){
                possible = false;
                break;
            }
        }
        if(possible){
            count++;
            for (long long i = c[1]; i < c[2]; ++i) {
                mem.insert(i);
            }
        }
    }
    std::cout << count << std::endl;

    return 0;
}
