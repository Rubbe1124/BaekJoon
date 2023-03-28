#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int arr[26][26] = { 0, };

int arr2[26][26] = { 0, };

int N;

int num;

void dfs(int i, int j, int depth);

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector<int> count;

	cin >> N;

	for (int i = 0; i < N; i++) {
		//for (int j = 0; j < N; j++) {
		//	int input;
		//	cin >> input;
		//	arr[i][j] = input;
		//}
		string input;
		cin >> input;
		for (int j = 0; j < input.length(); j++) {
			arr[i][j] = input[j] - '0';
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			num = 0;
			dfs(i, j,0);
			if (num != 0) {
				count.push_back(num);
			}
		}
	}

	cout << count.size()<<"\n";
	sort(count.begin(), count.end());

	for (int i = 0; i < count.size(); i++) {
		cout << count[i] << "\n";
	}
}

void dfs(int i, int j,int depth) {
	if (i < 0 || i >= N) {
		return;
	}
	if (j < 0 || j >= N) {
		return;
	}
	if (arr[i][j] == 1) {
		if (arr2[i][j] == 1) {
			return;
		}
		else {
			num++;
			arr2[i][j] = 1;
			dfs(i-1, j,depth+1);
			dfs(i+1, j, depth + 1);
			dfs(i, j-1, depth + 1);
			dfs(i, j+1, depth + 1);
		}
	}
}