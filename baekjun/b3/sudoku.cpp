#include <iostream>
#include <vector>
#include <map>

using namespace std;

int board[81];
vector<vector<int>> mem;
map<int, int> mp1, mp2;
int count = 0;

vector<int> find_possible(int a){
    int x = a / 9, y = a % 9;
    vector<int> toreturn;
    bool exists[10] = {false};
    for (int i = 0; i < 9; ++i) {
        exists[board[x*9 + i]] = true;
        exists[board[i*9 + y]] = true;
    }
    int x2 = x/3 * 3, y2 = y/3 * 3;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            exists[board[(x2 + i)*9 + y2 + j]] = true;
        }
    }
    for (int i = 1; i < 10; ++i) {
        if(!exists[i]){
            toreturn.push_back(i);
        }
    }
    return toreturn;
}

bool solve(int a = 0){
    if(a == count){
        return true;
    }
    mem[a] = find_possible(mp1[a]);
    if(mem[a].empty()){
        return false;
    }
    for(int pos : mem[a]) {
        board[mp1[a]] = pos;
        if (solve(a+1)){
            return true;
        }
    }
    board[mp1[a]] = 0;
    return false;
}

int main(int argc, char *argv[])
{
    for (int i = 0; i < 81; ++i) {
        std::cin >> board[i];
    }
    for (int i = 0; i < 81; ++i) {
        if(!board[i]){
            mp1.insert(pair<int, int>(count, i));
            mp2.insert(pair<int, int>(i, count));
            count++;
            mem.push_back(find_possible(i));
        }
    }
    solve();
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cout << board[i*9 + j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
