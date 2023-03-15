#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	stack<int> st;

	int count;
	cin >> count;

	for (int i = 0; i < count; i++) {
		string temp;
		cin >> temp;

		if (temp == "push") {
			int temp_num;
			cin >> temp_num;

			st.push(temp_num);
		}
		else if (temp == "pop") {
			if (st.size() == 0) {
				cout << -1 << "\n";
			}
			else {
				cout << st.top() << "\n";
				st.pop();
			}
		}
		else if (temp == "size") {
			cout << st.size() << "\n";
		}
		else if (temp == "empty") {
			if (st.empty()) {
				cout << "1" << "\n";
			}
			else {
				cout << "0" << "\n";
			}
		}
		else if (temp == "top") {
			if (st.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << st.top() << "\n";
			}
			
		}
	}
}