#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> nlist;
vector<int> toprint;

void pickm(int m){
    if(!m){
        for(int i: toprint){
            cout << i << " ";
        }
        cout << "\n";
        return;
    }
    for(int i : nlist){
        toprint.push_back(i);
        pickm(m - 1);
        toprint.pop_back();
    }
    return;
}

int main(int argc, char *argv[])
{
    int N, M;
    std::cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        nlist.push_back(i + 1);
    }
    pickm(M);
    return 0;
}

