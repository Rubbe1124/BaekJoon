#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void dfs(int level);
bool check(int level, int idx);

int chess[15][15] = { 0, };
int order;
int answer = 0;

int main() {
	
	cin >> order;

	dfs(0);

	cout << answer << "\n";
}

void dfs(int level) {
	if (level == order) {
		answer++;
		return;
	}
	for (int idx = 0; idx < order; idx++) {
		if (check(level, idx)) {
			chess[level][idx] = 1;
			dfs(level + 1);
			chess[level][idx] = 0;
		}
	}
}

bool check(int level, int idx) {
	bool return_answer = true;
	int count = 1;
	for (int i = level-1; i >=0; i--) {
		if (chess[i][idx] == 1) {
			return_answer = !return_answer;
			return return_answer;
		}
		if ((idx - count)>=0&&chess[i][idx - count] == 1) {
			return_answer = !return_answer;
			return return_answer;
		}
		if ((idx + count) <= order && chess[i][idx + count] == 1) {
			return_answer = !return_answer;
			return return_answer;
		}
		count++;
	}
	return return_answer;
}