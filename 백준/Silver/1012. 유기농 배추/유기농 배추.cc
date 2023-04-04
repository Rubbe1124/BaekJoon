#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>

using namespace std;

int arr[51][51] = { 0, };

int check[51][51] = { 0, };

int M, N, K;

int answer = 0;

void dfs(int X, int Y, int depth);

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		for (int j = 0; j < 51; j++) {
			memset(arr[j], 0, sizeof(int) * 51);
			memset(check[j], 0, sizeof(int) * 51);
		}
		answer = 0;

		cin >> M >> N >> K;
		for (int j = 0; j < K; j++) {
			int X, Y;
			cin >> X >> Y;
			arr[X][Y] = 1;
		}
		for (int j = 0; j < M; j++) {
			for (int k = 0; k < N; k++) {
				dfs(j, k, 0);
			}
		}
		cout << answer << "\n";
	}
}

void dfs(int X, int Y,int depth) {
	if (X < 0) {
		return;
	}
	if (X >= M) {
		return;
	}
	if (Y < 0) {
		return;
	}
	if (Y >= N) {
		return;
	}
	if (arr[X][Y] == 1&&check[X][Y]==0) {
		check[X][Y] = 1;
		if (depth == 0) {
			answer++;
		}
		dfs(X-1, Y, depth + 1);
		dfs(X+1, Y, depth + 1);
		dfs(X, Y-1, depth + 1);
		dfs(X, Y+1, depth + 1);
	}
}