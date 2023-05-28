#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<unordered_map>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	unordered_map<int, int> u_m;
	int answer = 0;

	int N;
	cin >> N;
	int M;
	cin >> M;

	bool vec[101][101];

	bool check[101];

	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			vec[i][j] = false;
		}
		check[i] = false;
	}
	check[1] = true;

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		vec[a][b] = true;
	}
	queue<int> que;
	for (int i = 1; i < N+1; i++) {
		if (vec[1][i] == true) {
			check[i] = true;
			que.push(i);
			answer++;
		}
	}
	while (que.size() != 0) {
		for (int i = 1; i < N+1; i++) {
			if (vec[que.front()][i] == true|| vec[i][que.front()] == true) {
				if (check[i] == true) {
					continue;
				}
				else {
					check[i] = true;
					que.push(i);
					answer++;
				}
			}
		}
		que.pop();
	}
	cout << answer << "\n";
}
