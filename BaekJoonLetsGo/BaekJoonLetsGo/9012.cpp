#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int order;
	cin >> order;

	for (int i = 0; i < order; i++) {
		string temp;
		cin >> temp;

		stack<char> st;

		for (int j = temp.size() - 1; j >= 0; j--) {
			if (temp[j] == ')') {
				st.push(temp[j]);
			}
			else {
				if (st.size() == 0) {
					cout << "NO" << "\n";
					break;
				}
				else {
					st.pop();
				}
			}
			if (j == 0) {
				if (st.size() == 0) {
					cout << "YES" << "\n";
					break;
				}
				else {
					cout << "NO" << "\n";
				}
			}
		}
	}
}