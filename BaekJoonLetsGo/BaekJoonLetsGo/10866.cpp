#include<iostream>
#include<algorithm>
#include<vector>
#include<deque>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	deque<int> deq;

	int count;
	cin >> count;

	for (int i = 0; i < count; i++) {



		string order;
		cin >> order;

		if (order == "push_front") {
			int temp_num;
			cin >> temp_num;

			deq.push_front(temp_num);
		}
		else if (order == "push_back") {
			int temp_num;
			cin >> temp_num;

			deq.push_back(temp_num);
		}
		else if (order == "pop_front") {
			if (deq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << deq.front() << "\n";
				deq.pop_front();
			}
		}
		else if (order == "pop_back") {
			if (deq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << deq.back() << "\n";
				deq.pop_back();
			}
		}
		else if (order == "size") {
			cout << deq.size() << "\n";
		}
		else if (order == "empty") {
			if (deq.empty()) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}
		else if (order == "front") {
			if (deq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << deq.front() << "\n";
			}
		}
		else if (order == "back") {
			if (deq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << deq.back() << "\n";
			}
		}
	}
}