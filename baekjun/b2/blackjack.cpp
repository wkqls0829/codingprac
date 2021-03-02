#include <iostream>
#include <algorithm>

using namespace std;

int pick(int m, int* cards, int cardnum, int sum){
    if(!cardnum){
        return sum;
    }
    if(*cards == -1){
        return 0;
    }
    int toreturn[3];
    if(*cards > m-sum){
        return pick(m, cards+1, cardnum, sum);
    }
    int a = pick(m, cards+1, cardnum - 1, sum+*cards);
    int b = pick(m, cards+1, cardnum, sum);
    if(a >= b){
        return a;
    } else{
        return b;
    }
}

int main(int argc, char *argv[])
{
    int n,m;
    std::cin >> n >> m; 
    int cards[n+1];
    for (int i = 0; i < n; ++i) {
        std::cin >> cards[i];
    }
    cards[n] = -1;
    int result = pick(m, cards, 3, 0);
    cout << result << endl;
    return 0;
}
