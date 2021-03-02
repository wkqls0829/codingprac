#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

typedef pair<int, int> Pr;

const long long INF = 1e18;

int main()
{
	int N, M;
	cin >> N >> M;
	vector<Pr> edges[500];
	long long shortest[500];

	fill(shortest, shortest + 500, INF);
	shortest[0] = 0;

	int st, dest, tm;
	for (int i = 0; i < M; i++)
	{
		scanf("%d %d %d", &st, &dest, &tm);
		edges[st - 1].push_back(Pr{ dest-1, tm });
	}
	for (int i = 0; i < N-1; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (shortest[j] != INF) {
				for (auto e : edges[j]) {
					if (shortest[j] + e.second < shortest[e.first]) {
						shortest[e.first] = shortest[j] + e.second;
					}
				}
			}
		}
	}
	for (int j = 0; j < N; j++) {
		if (shortest[j] != INF) {
			for (auto e : edges[j]) {
				if (shortest[j] + e.second < shortest[e.first]) {
					cout << -1 << "\n";
					return 0;
				}
			}
		}
	}
	for (int i = 1; i < N; i++) {
		if (shortest[i] == INF) {
			cout << -1 << "\n";
		}
		else {
			cout << shortest[i] << "\n";
		}
	}
    return 0;
}
