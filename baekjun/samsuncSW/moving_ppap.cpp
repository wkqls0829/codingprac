#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<vector<int>> house;

int move_ppap(int state, int x, int y){
    if(x==N-1 && y==N-1){
        return 1;
    }
    int sum = 0;
    switch(state){
        case 0:
            if(!house[x][y+1]){
                sum += move_ppap(0, x, y+1);
                if(!house[x+1][y] && !house[x+1][y+1]){
                    sum += move_ppap(1, x+1, y+1);
                }
            }
            break;
        case 1:
            if(!house[x][y+1]){
                sum += move_ppap(0, x, y+1);
                if(!house[x+1][y] && !house[x+1][y+1]){
                    sum += move_ppap(1, x+1, y+1);
                }
            }
            if(!house[x+1][y]){
                sum+=move_ppap(2, x+1, y);
            }
            break;
        case 2:
            if(!house[x+1][y]){
                sum+=move_ppap(2, x+1, y);
                if(!house[x][y+1] && !house[x+1][y+1]){
                    sum+=move_ppap(1, x+1, y+1);
                }
            }
            break;
    }
    return sum;
}
int main(void)
{
    int state = 0;

    std::cin >> N;
    house = vector<vector<int>>(N+1, vector<int>(N+1, 1));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> house[i][j];
        }
    }

    std::cout << move_ppap(state, 0, 1) << std::endl;

    return 0;
}
