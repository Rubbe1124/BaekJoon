#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	queue<int> que;

	int count;
	cin >> count;

	for (int i = 0; i < count; i++) {
		string order;
		cin >> order;

		if (order == "push") {
			int temp_num;
			cin >> temp_num;

			que.push(temp_num);
		}
		else if (order == "pop") {
			if (que.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << que.front() << "\n";
				que.pop();
			}
		}
		else if (order == "size") {
			cout << que.size() << "\n";
		}
		else if (order == "empty") {
			if (que.empty()) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (order == "front") {
			if (que.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << que.front() << "\n";
			}
		}
		else if (order == "back") {
			if (que.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << que.back() << "\n";
			}
		}
	}
}