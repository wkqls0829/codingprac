#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// function that returns side coordinates. 
// does not return coordinates out of boundary.
vector<vector<int>> get_sides(vector<int> xy, int x_len, int y_len){
    vector<vector<int>> toreturn;
    if(xy[0]>0){
        toreturn.push_back(vector<int>{xy[0]-1, xy[1]});
    }
    if(xy[0] < x_len-1){
        toreturn.push_back(vector<int>{xy[0]+1, xy[1]});
    }
    if(xy[1]>0){
        toreturn.push_back(vector<int>{xy[0], xy[1]-1});
    }
    if(xy[1] < y_len-1){
        toreturn.push_back(vector<int>{xy[0], xy[1]+1});
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

int N,M;
vector<vector<int>> box;

vector<vector<vector<int>>> day_num;

int ripe(){
    auto ripes = day_num.back();
    int i = 1;
    while(!ripes.empty()){
        vector<vector<int>> next_ripe;
        for(auto tom : ripes){
            auto nexts = get_sides(tom, N, M);
            for(auto next: nexts){
                if(!box[next[0]][next[1]]){
                    box[next[0]][next[1]] = i;
                    next_ripe.push_back(next);
                }
            }
        }
        ripes = next_ripe;

        i++;
    }
    return i-2;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    std::cin >> M >> N;
    box = vector<vector<int>>(N, vector<int>(M, 0));
    vector<vector<int>> ripe_tomato;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cin >> box[i][j];
            if(box[i][j] == 1){
                ripe_tomato.push_back(vector<int>{i,j});
            }
        }
    }
    day_num.push_back(ripe_tomato);
    int answer = ripe();
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if(!box[i][j]){
                std::cout << -1 << std::endl;
                return 0;
            }
        }
    }
    cout << answer << endl;
    return 0;
}
