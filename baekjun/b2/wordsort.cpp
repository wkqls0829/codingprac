#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <utility>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;
    vector<pair<int, string>> words(n, pair<int, string>(0, ""));
    for (int i = 0; i < n; ++i) {
        string temps;
        std::cin >> temps;
        words[i].first = temps.size();
        words[i].second = temps;
    }
    sort(words.begin(), words.end());
    string prev;
    for(pair<int, string> p: words){
        if(p.second == prev){
            continue;
        }
        cout << p.second << '\n';
        prev = p.second;
    }
    return 0;
}
