#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int N;
vector<vector<int>> apartments;

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

int cluster(int x, int y){
    int toreturn = 1;
    apartments[x][y] = 0;
    for(auto vec: get_sides(x,y,N,N)){
        if(apartments[vec[0]][vec[1]]){
            toreturn += cluster(vec[0], vec[1]);
        }
    }
    return toreturn;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cin >> N;
    apartments = vector<vector<int>>(N, vector<int>(N, 0));
    for (int i = 0; i < N; ++i) {
        string input_str;
        std::cin >> input_str;
        int j = 0;
        for(char c : input_str){
            apartments[i][j] = c-48;
            j++;
        }
    }
    vector<int> answers;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if(apartments[i][j]){
                answers.push_back(cluster(i, j));
            }    
        } 
    }

    sort(answers.begin(), answers.end());
    std::cout << answers.size() << std::endl;
    for(int a:answers){
        std::cout << a << "\n";
    }
    return 0;
}
