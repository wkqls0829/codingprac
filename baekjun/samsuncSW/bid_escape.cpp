#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;


int N, M;
vector<vector<char>> board;

typedef pair<vector<int>, int> pr;
typedef pair<int, int> intpr;


int find_way(vector<int> rbcoords){
    queue<pr> qu;
    qu.push(pr(rbcoords, 1));

    vector<intpr> directions = {intpr{-1,0},intpr{0,-1},intpr{1,0},intpr{0,1}};   

    while(!qu.empty()){
        auto thispr = qu.front();
        qu.pop();
        if(thispr.second > 10){
            return -1;
        }
        for(auto dir: directions){
            vector<int> pos = thispr.first;
            int ir, ib;
            bool colidr = false, colidb = false;
            int done = false;
            for(ir = 1; board[pos[0] + dir.first*ir][pos[1] + dir.second*ir] != '#'; ++ir){
                if(board[pos[0] + dir.first*ir][pos[1] + dir.second*ir] == 'O'){
                    done = true; 
                }
                if(pos[0] + dir.first*ir == pos[2] && pos[1] + dir.second*ir == pos[3]){
                    colidr = true;
                }
            }
            bool cont = false;
            for(ib = 1; board[pos[2] + dir.first*ib][pos[3] + dir.second*ib] != '#'; ++ib){
                if(board[pos[2] + dir.first*ib][pos[3] + dir.second*ib] == 'O'){
                    cont = true; 
                }
                if(pos[2] + dir.first*ib == pos[0] && pos[3] + dir.second*ib == pos[1]){
                    colidb = true;
                }
            }
            pos[0] += dir.first*--ir;
            pos[1] += dir.second*ir;
            pos[2] += dir.first*--ib;
            pos[3] += dir.second*ib;
            if(colidr){
                pos[0] = pos[2] - dir.first;
                pos[1] = pos[3] - dir.second;
            }
            if (colidb){
                pos[2] = pos[0] - dir.first;
                pos[3] = pos[1] - dir.second;
            }
            if(cont){
                continue;
            }
            if(done){
                return thispr.second;
            }
            if(thispr.first != pos){
                qu.push(pr{pos, thispr.second+1});
            }
        } 
    }
    return -1;
}

int main(void)
{
    std::cin >> N >> M;
    board = vector<vector<char>>(N, vector<char>(M, 0));
    string tmp;
    vector<int> rbcoords;
    int rx, ry, bx, by;
    for (int i = 0; i < N; ++i) {
        std::cin >> tmp;
        for (int j = 0; j < M; ++j) {
            board[i][j] = tmp[j];   
            if(tmp[j] == 'R'){
                rx = i;
                ry = j;
                tmp[j] = '.';
            } else if (tmp[j] == 'B'){
                bx = i;
                by = j;
                tmp[j] = '.';
            }
        }
    }
    rbcoords = {rx, ry, bx, by};
    cout << find_way(rbcoords) << endl;
    return 0;
}
