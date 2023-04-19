#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	while (true) {
		string input;

		getline(cin,input);
		//cin >> input;

		if (input == ".") {
			break;
		}

		int small_count = 0;
		int big_count = 0;

		stack<char> st;

		for (int i = 0; i < input.length(); i++) {
			if (input[i] == '(') {
				st.push('(');
			}
			else if (input[i] == ')') {
				if (st.size() == 0|| st.top() != '(') {
					i = input.length();
					st.push('fail');
				}
				else {
					st.pop();
				}
			}
			else if (input[i] == '[') {
				st.push('[');
			}
			else if (input[i] == ']') {
				if (st.size() == 0 || st.top() != '[') {
					i = input.length();
					st.push('fail');
				}
				else {
					st.pop();
				}
			}
		}
		if (st.size() == 0) {
			cout << "yes" << "\n";
		}
		else {
			cout << "no" << "\n";
		}
	}
}