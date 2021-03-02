#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <string>
#include <cmath>

using namespace std;

typedef pair<int, int> pr;

const int INF = 1 << 30;

int V, E, K;
vector<pr> edges[20000];

int shortest[20000];
bool visited[20000] = {false};

vector<int> get_shortest_path (int start){
    
    fill(shortest, shortest+20000, INF);
    fill(visited, visited+20000, false);

    vector<int> toreturn;
    
    priority_queue<pr, vector<pr>, greater<pr>> prq;
    prq.push(pr{0,start});
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
        toreturn.push_back(shortest[i]);
    }
    return toreturn;
}

int main(void)
{

    std::cin >> V >> E;

    int a,b, dist;
    for (int i = 0; i < E; ++i) {
        std::cin >> a >> b >> dist;
        edges[a-1].push_back(pr{b-1, dist});
        edges[b-1].push_back(pr{a-1, dist});
    }

    int v1, v2;
    cin >> v1 >> v2;
    v1--;
    v2--;
    auto sp = get_shortest_path(0);
    auto vp1 = get_shortest_path(v1);
    auto vp2 = get_shortest_path(v2);

    int se = sp[V-1];
    int sv1 = sp[v1];
    int sv2 = sp[v2];
    int v12 = vp1[v2];
    int v1e = vp1[V-1];
    int v2e = vp2[V-1];

    vector<int> lengths;
    lengths.push_back(sv1 + sv1 + se + v2e + v2e);
    lengths.push_back(sv1+sv1+sv2+v2e);
    lengths.push_back(sv1+v12+v12+v1e);
    lengths.push_back(sv1+v12+sv2+se);
    lengths.push_back(sv1+sv1+v12+v12+se);
    lengths.push_back(sv2+sv2+v12+v12+se);
    lengths.push_back(sv2+v12+v12+v2e);
    lengths.push_back(sv1+sv1+sv2+sv2+se);
    lengths.push_back(sv2+sv2+sv1+v1e);
    lengths.push_back(sv2+sv2+se+v1e+v1e);
    lengths.push_back(sv1+v12+v2e);
    lengths.push_back(sv1+v1e+v2e+v2e);
    lengths.push_back(sv2+v12+v1e);
    lengths.push_back(sv2+v2e+v1e+v1e);
    lengths.push_back(se+v1e+v1e+v2e+v2e);
    lengths.push_back(se+v1e+v2e+v12);
    lengths.push_back(se+v1e+v1e+v12+v12);
    lengths.push_back(se+v2e+v2e+v12+v12);


    int length = *min_element(lengths.begin(), lengths.end());
    if(length >= INF){
        std::cout << -1 << std::endl;
        return 0;
    }
    std::cout << length << std::endl;

    return 0;
}
