#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	queue<int> que;

	int input;
	cin >> input;

	que.push(input);

	int answer = 0;

	bool flag = true;

	while (flag) {
		int count = que.size();
 		for (int i = 0; i < count; i++) {
			if (que.front() == 1) {
				flag = false;
				break;
			}
			if (que.front() % 3 == 0) {
				que.push(que.front() / 3);
			}
			if (que.front() % 2 == 0) {
				que.push(que.front() / 2);
			}
			que.push(que.front() - 1);
			que.pop();
			if (i == count - 1) {
				answer++;
			}
		}
	}                             
	cout << answer << "\n";
}                                   