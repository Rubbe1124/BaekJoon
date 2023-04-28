#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
#include<queue>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;

	cout << "<";
	queue<int> que;

	for (int i = 0; i < N; i++) {
		que.push(i + 1);
	}
	while (que.size() != 0) {
		for (int i = 0; i < K-1; i++) {
			que.push(que.front());
			que.pop();
		}
		if (que.size() == 1) {
			cout << que.front() << ">";
		}
		else{
			cout << que.front() << ", ";
		}
		que.pop();
	}
	cout << "\n";
}