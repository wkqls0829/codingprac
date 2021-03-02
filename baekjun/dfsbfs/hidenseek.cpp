#include <iostream>
#include <vector>
#include <queue>

#define MAX_SPOT 100000
#define MEM_MAX 1000000

using namespace std;

int N, K;

int find(int pos=N){
    if(pos==K){
        return 1;
    }
    int qu[MEM_MAX+3];
    int tm[MAX_SPOT+3] = {0};
    int bck = 0, fnt = 0;
    qu[bck++] = pos;
    tm[pos] = 1;
    if(pos==0){
        qu[bck++] = 1;
        tm[1] = 2;
        fnt++;
    }
    while(fnt != bck){
        int cur_pos = qu[fnt++];
        if(cur_pos < 0 || cur_pos > MAX_SPOT){
            continue;
        }
        int second = tm[cur_pos];
        if(cur_pos == K){
            return second;
        }
        if(!cur_pos){
            continue;
        }
        if(!tm[cur_pos+1]){
            qu[bck++] = cur_pos+1;
            tm[cur_pos+1] = second+1;
        }
        if(!tm[cur_pos-1]){
            qu[bck++] = cur_pos-1;
            tm[cur_pos-1] = second+1;
        }
        if(cur_pos*2 <= MAX_SPOT){
            if(!tm[cur_pos*2]){
                qu[bck++] = cur_pos*2;
                tm[cur_pos*2] = second+1;
            }
        }

    }    
    return -1;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    std::cin >> N >> K;
    std::cout << find()- 1 << std::endl;
    return 0;
}
