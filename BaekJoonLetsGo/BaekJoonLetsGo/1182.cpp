#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

void dfs(int idx);

vector<int> start;
int ans = 0;
int N, S;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);


	cin >> N >> S;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		start.push_back(temp);
	}
	dfs(0);
	cout << ans;
}

int temp_total = 0;

void dfs(int idx) {
	if (idx == start.size()) {
		return;
	}
	for (int i = idx; i < start.size();i++) {
		if (idx == 0) {
			temp_total = 0;
		}
		temp_total += start[i];
		if (temp_total == S) {
			ans++;
		}
		dfs(i + 1);
		temp_total -= start[i];
	}
}