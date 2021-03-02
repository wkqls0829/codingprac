#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    std::cin >> n;
    vector<pair<int, int>> coord;
    for (int i = 0; i < n; ++i) {
        int tempa, tempb;
        cin >> tempa >> tempb;
        coord.push_back(pair<int, int>(tempa, tempb));
        
    }
    sort(coord.begin(), coord.end());
    for(pair<int, int> c:coord){
        cout << c.first <<" " <<c.second << endl;
    }
    return 0;
}
