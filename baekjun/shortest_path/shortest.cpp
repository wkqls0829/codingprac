#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>

using namespace std;

typedef pair<int, int> pr;

const int INF = 1 << 30;

int main(void)
{

    int V, E, K;
    std::cin >> V >> E >> K;
    K--;
    vector<pr> edges[20000];

    int shortest[20000];
    bool visited[20000] = {false};
    fill(shortest, shortest+20000, INF);
    shortest[K] = 0;

    int a,b, dist;
    for (int i = 0; i < E; ++i) {
        std::cin >> a >> b >> dist;
        edges[a-1].push_back(pr{b-1, dist});
    }
    priority_queue<pr, vector<pr>, greater<pr>> prq;
    prq.push(pr{0,K});
    while(!prq.empty()){
        pr this_pr = prq.top();
        prq.pop();
        if(visited[this_pr.second]){
            continue;
        }
        shortest[this_pr.second] = this_pr.first;

        for(auto e : edges[this_pr.second]){
            if(!visited[e.first]){
                prq.push(pr{this_pr.first+e.second, e.first});
            }
        }

        visited[this_pr.second] = true;

    }

    for(int i = 0; i < V; i++){
        if(shortest[i] == INF){
            cout << "INF" << "\n";
        } else{
            cout << shortest[i] << "\n";
        }
    }
    return 0;
}
