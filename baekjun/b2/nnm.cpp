#include <iostream>
#include <vector>
#include <string>

using namespace std;

void pickn(vector<int> nlist, int m, vector<int> toprint){
    if(!m){
        for(int i:toprint){
            cout << i << " ";
        }
        cout << "\n";
        return;
    }
    for (int i = 0; i < nlist.size(); ++i) {
        vector<int> copy(nlist);
        vector<int> toprintcopy(toprint);
        toprintcopy.push_back(copy[i]);
        copy.erase(copy.begin()+i);
        pickn(copy, m-1, toprintcopy);
    }
    return;
}

int main(int argc, char *argv[])
{
    int n, m;
    std::cin >> n >> m;
    vector<int> nlist;
    for (int i = 1; i < n+1; ++i) {
        nlist.push_back(i);
    }
    pickn(nlist, m, vector<int>());
    return 0;
}
