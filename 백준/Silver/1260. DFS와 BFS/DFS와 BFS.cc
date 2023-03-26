#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<cstring>

using namespace std;

const int MAX = 1001;

bool visit[MAX] = { false, };
vector<int> adj[MAX];

int N, M, V;

void bfs(int start);
void dfs(int start);

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);


	cin >> N >> M >> V;

	for (int i = 0; i < M; i++) {
		int input1, input2;
		cin >> input1 >> input2;
		adj[input1].push_back(input2);
		adj[input2].push_back(input1);
	}

	for (int i = 0; i < MAX; i++) {
		sort(adj[i].begin(), adj[i].end());
	}

	dfs(V);
	cout << "\n";
	bfs(V);
}

void bfs(int start) {
	memset(visit, false, sizeof(visit));

	queue<int> que;
	visit[start] = true;
	que.push(start);
	
	while (que.size()) {
		int temp = que.front();
		cout << temp << " ";
		que.pop();
		for (int i = 0; i < adj[temp].size(); i++) {
			if (visit[adj[temp][i]] == false) {
				que.push(adj[temp][i]);
				visit[adj[temp][i]] = true;
			}
		}
	}
}

void dfs(int start) {

	cout << start << " ";
	visit[start] = true;

	for (int i = 0; i < adj[start].size(); i++) {
		if (visit[adj[start][i]] == false) {
			dfs(adj[start][i]);
		}
	}
}