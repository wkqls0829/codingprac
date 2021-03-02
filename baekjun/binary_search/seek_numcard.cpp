#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    std::cin >> N;
    map<int,int> Amap;
    for (int i = 0; i < N; ++i) {
        int k;
        std::cin >> k;
        auto fi = Amap.find(k);
        if(fi == Amap.end()){
            Amap.insert(pair<int, int>(k, 1));
        } else{
            fi->second++;
        }
    }
    int M;
    std::cin >> M;
    for (int i = 0; i < M; ++i) {
        int m;
        std::cin >> m;
        auto fi = Amap.find(m);
        if(fi == Amap.end()){
            std::cout << 0 << " ";
        } else{
            std::cout << fi->second << " ";
        }
    }

    return 0;
}
