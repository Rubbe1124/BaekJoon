#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;

	int arr[100001] = { 0, };
	queue<int> que;
	que.push(N);
	arr[N] = 0;

	//int count = 0;

	while (!que.empty()) {
		int f = que.front();
		
		if (f == K) {
			cout << arr[f] << "\n";
			break;
		}
		if (f - 1 >= 0 && arr[f - 1] == 0) {
			arr[f - 1] = arr[f] + 1;
			que.push(f - 1);
		}
		if (f + 1 <= 100000 && arr[f + 1] == 0) {
			arr[f + 1] = arr[f] + 1;
			que.push(f + 1);
		}
		if (f * 2 <= 100000 && arr[f * 2] == 0) {
			arr[f * 2] = arr[f] + 1;
			que.push(f * 2);
		}
		que.pop();
		//count++;
	}
}