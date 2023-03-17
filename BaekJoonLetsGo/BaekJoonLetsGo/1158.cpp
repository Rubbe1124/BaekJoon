#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int temp1;
	int temp2;
	cin >> temp1 >> temp2;

	queue<int> que;

	for (int i = 0; i < temp1; i++) {
		que.push(i+1);
	}

	cout << "<";

	while (!que.empty()) {
		for (int i = 0; i < temp2 - 1; i++) {
			que.push(que.front());
			que.pop();
		}

		if (que.size() == 1) {
			cout << que.front() << "";
			que.pop();
		}
		else {
			cout << que.front() << ", ";
			que.pop();
		}
	}

	cout << ">";
}