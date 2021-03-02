#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> nlist;
vector<int> toprint;
int N, M;

void pickm(int m, int pos = 1){
    if(!m){
        for(int i: toprint){
            cout << i << " ";
        }
        cout << "\n";
        return;
    }
    for(int i = pos; i <= N; i++){
        toprint.push_back(i);
        pickm(m - 1, i);
        toprint.pop_back();
    }
    return;
}

int main(int argc, char *argv[])
{
    std::cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        nlist.push_back(i + 1);
    }
    pickm(M);
    return 0;
}

