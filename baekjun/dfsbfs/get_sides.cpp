#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> get_sides(int x, int y, int x_len, int y_len){
    vector<vector<int>> toreturn;
    if(x>0){
        toreturn.push_back(vector<int>{x-1, y});
    }
    if(x < x_len-1){
        toreturn.push_back(vector<int>{x+1, y});
    }
    if(y>0){
        toreturn.push_back(vector<int>{x, y-1});
    }
    if(y < y_len-1){
        toreturn.push_back(vector<int>{x, y+1});
    }
    return toreturn;
}
