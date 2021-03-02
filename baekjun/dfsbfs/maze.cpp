#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <cstdlib>
#include <queue>

using namespace std;

// function that returns side coordinates. 
// does not return coordinates out of boundary.
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


// prints 2d vector
template <typename T>
void print_2d_vector(vector<vector<T>> vec){
    for(auto v1 : vec){
        for(auto v2 : v1){
            cout << v2 << " ";
        }
        std::cout << "\n";
    }
}

vector<vector<int>> maze;
int N, M;

void find_path(int x, int y){
    queue<vector<int>> tovisit;
    tovisit.push(vector<int>{x,y});
    while(!tovisit.empty()){
        auto this_vec = tovisit.front();
        tovisit.pop(); 
        auto sides = get_sides(this_vec[0], this_vec[1],N,M);
        for(auto vec : sides){
            if(maze[vec[0]][vec[1]] && maze[this_vec[0]][this_vec[1]] + 1 < maze[vec[0]][vec[1]]){
                maze[vec[0]][vec[1]] = maze[this_vec[0]][this_vec[1]] + 1;
                tovisit.push(vec); 
            }
        }

    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    std::cin >> N >> M;
    maze = vector<vector<int>>(N, vector<int>(M, 0));
    for (int i = 0; i < N; ++i) {
        string str_input;
        std::cin >> str_input;        
        const char* str_char = str_input.c_str();
        for (int j = 0; j < M; ++j) {
            if(str_char[j] == '1'){
                maze[i][j] = 100000000;
            }
        }
    }
    maze[0][0] = 1;
    find_path(0,0);
    //print_2d_vector<int>(maze);
    std::cout << maze[N-1][M-1] << std::endl;
    return 0;
}
