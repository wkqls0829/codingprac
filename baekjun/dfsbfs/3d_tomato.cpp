#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// function that returns side coordinates of multi dimensional vector. 
// does not return coordinates out of boundary.
vector<vector<int>> get_sides(int dim, vector<int> x, vector<int> len){
    vector<vector<int>> toreturn;
    for(int i = 0; i < dim; i++){
        if(x[i]>0){
            auto topush = vector<int>(x);
            topush[i] -= 1;
            toreturn.push_back(topush);
        }
        if(x[i] < len[i]-1){
            auto topush = vector<int>(x);
            topush[i] += 1;
            toreturn.push_back(topush);
        }
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

int N,M,K;
vector<vector<vector<int>>> box;


int ripe(vector<vector<int>> ripes){
    int i = 1;
    while(!ripes.empty()){
        vector<vector<int>> next_ripe;
        for(const auto& tom : ripes){
            for(auto&& next: get_sides(3, tom, {N,M,K})){
                if(!box[next[0]][next[1]][next[2]]){
                    box[next[0]][next[1]][next[2]] = i;
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

    std::cin >> K >> M >> N;
    box = vector<vector<vector<int>>>(N, vector<vector<int>>(M, vector<int>(K, 0)));
    vector<vector<int>> ripe_tomato;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            for (int k = 0; k < K; ++k) {
                std::cin >> box[i][j][k];
                if(box[i][j][k] == 1){
                    ripe_tomato.push_back(vector<int>{i,j,k});
                }
            }
        }
    }
    int answer = ripe(ripe_tomato);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            for (int k = 0; k < K; ++k) {
                if(!box[i][j][k]){
                    std::cout << -1 << std::endl;
                    return 0;
                }
            }
        }
    }
    cout << answer << endl;
    return 0;
}
