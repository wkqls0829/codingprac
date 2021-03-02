#include <iostream>
#include <vector>
#include <string>

using namespace std;

int N, M;
vector<int> nlist;
vector<int> toprint;

void pickm(int from, int m){
    if(!m){
        for(int i : toprint){
            cout << i << " ";
        }
        cout << "\n";
        return;
    }
    if(from == nlist.size()){
        return;
    }
    toprint.push_back(nlist[from]);
    pickm(from + 1, m - 1);
    toprint.pop_back();
    pickm(from + 1, m);
}

int main(int argc, char *argv[])
{
    std::cin >> N >>  M;
    for (int i = 1; i <= N; ++i) {
        nlist.push_back(i);
    }
    pickm(0, M);

    return 0;
}
