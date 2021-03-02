#include <iostream>
#include <vector>


using namespace std;

int N;
vector<vector<int>> paper;
int count[2] = {0, 0};

int divide(int startx, int starty, int n){
    if(n==1){
        count[paper[startx][starty]]++;
        return 1;
    }
    int toreturn = divide(startx, starty, n/2) + divide(startx + n/2, starty, n/2)
                    + divide(startx, starty + n/2, n/2) + divide(startx + n/2, starty + n/2, n/2);
    if(toreturn == 4){
        int sum = paper[startx][starty] + paper[startx+n/2][starty] + paper[startx][starty+n/2] + paper[startx+n/2][starty+n/2];
        if(sum==4){
            count[1] -= 3;
            toreturn = 1;
        } else if (sum == 0){
            count[0] -= 3;
            toreturn = 1;
        }
    }
    return toreturn; 
}

int main(void)
{
    std::cin >> N;
    paper = vector<vector<int>>(N, vector<int>(N, 0));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> paper[i][j];
        }
    }
    divide(0,0,N);
    std::cout << count[0] << std::endl;
    std::cout << count[1] << std::endl;
    return 0;
}
