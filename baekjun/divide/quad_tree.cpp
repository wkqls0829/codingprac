#include <iostream>
#include <vector>
#include <string>


using namespace std;

int N;
vector<vector<int>> paper;

string divide(int x, int y, int n){
    if(n==1){
        return to_string(paper[x][y]);
    }
    string toreturn = "(";
    toreturn.append(divide(x,y,n/2));
    toreturn.append(divide(x,y+n/2,n/2));
    toreturn.append(divide(x+n/2,y,n/2));
    toreturn.append(divide(x+n/2,y+n/2,n/2));
    toreturn.append(")");
    if(toreturn == "(0000)"){
        toreturn = "0";
    } else if(toreturn == "(1111)"){
        toreturn = "1";
    }
    return toreturn; 
}

int main(void)
{
    std::cin >> N;
    paper = vector<vector<int>>(N, vector<int>(N, 0));
    for (int i = 0; i < N; ++i) {
        string input;
        std::cin >> input;
        for (int j = 0; j < N; ++j) {
            paper[i][j] = input[j] - 48;
        }
    }
    std::cout << divide(0,0,N) << std::endl;
    return 0;
}
