#include <iostream>
#include <vector>
#include <cmath>

int N;
std::vector<std::vector<int>> status;
std::vector<int> team1, team2;
int min_gap = 10000000;

void put_team(int player = 0){
    if(player == N){
        int sum = 0;
        for(int i : team1){
            for(int j: team1){
                sum += status[i][j];
            }
        }
        for(int i : team2){
            for(int j: team2){
                sum -= status[i][j];
            }
        }
        sum = abs(sum);
        if(sum < min_gap){
            min_gap = sum;
        }
        return;
    }
    if(team1.size()==N/2){
        team2.push_back(player);
        put_team(player+1);
        team2.pop_back();
    } else if(team2.size()==N/2){
        team1.push_back(player);
        put_team(player+1);
        team1.pop_back();
    } else{
        team1.push_back(player);
        put_team(player+1);
        team1.pop_back();
        team2.push_back(player);
        put_team(player+1);
        team2.pop_back();
    }
    return;
}

int main(void)
{
    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        status.push_back(std::vector<int>(N, 0));
        for (int j = 0; j < N; ++j) {
            std::cin >> status[i][j];
        }
    }
    put_team();
    std::cout << min_gap << std::endl;
    return 0;
}
