#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;
    int count = 0;
    int qu[1000001];
    int cnt[1000001] = {0};
    int fnt = 0, bck = 0;
    qu[bck++] = N;
    cnt[N] = 1;
    while(fnt != bck){
        int this_n = qu[fnt++];
        int count = cnt[this_n];
        if(this_n==1){
            break;
        }
        if(this_n%3==0 && !cnt[this_n/3]){
            qu[bck++] = this_n/3;
            cnt[this_n/3] = count+1;
        }
        if(this_n%2==0 && !cnt[this_n/2]){
            qu[bck++] = this_n/2;
            cnt[this_n/2] = count+1;
        }
        if(!cnt[this_n-1]){
            qu[bck++] = this_n-1;
            cnt[this_n-1] = count+1;
        }
    }
    std::cout << cnt[1]-1 << std::endl;

    return 0;
}
