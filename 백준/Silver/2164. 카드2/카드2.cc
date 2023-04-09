#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<deque>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	deque<int> deq;

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		deq.push_back(i);
	}
	while (deq.size() != 1) {
		deq.pop_front();
		deq.push_back(deq.front());
		deq.pop_front();
	}
	cout << deq.front();
}