#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M, V;
vector<vector<bool>> graph1(1001, vector<bool>(1001, false));
vector<bool> visited(1001, false);

void DFS(int node){
    cout << node << " ";
    visited[node] = true;

    for (int i = 1; i < N+1; ++i) {
        if(graph1[node][i] && !visited[i]){
            DFS(i);
        }
    }
    return;
}

void BFS(int node){

    queue<int> qu;
    qu.push(node);
    visited[node] = true;
    while(!qu.empty()){
        int this_node = qu.front();
        qu.pop();
        cout << this_node << " ";
        for (int i = 1; i < N+1; ++i) {
            if(graph1[this_node][i] && !visited[i]){
                visited[i] = true;
                qu.push(i);
            }
        }
    }

    return;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    std::cin >> N>>M>>V;
    for (int i = 0; i < M; ++i) {
        int a,b;
        std::cin >> a >> b;
        graph1[a][b] = graph1[b][a] = true;
    }
    DFS(V);
    std::cout << std::endl;
    visited = vector<bool>(1001, false);
    BFS(V);
    return 0;
}
