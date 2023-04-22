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

	stack<int> st;

	int K;
	cin >> K;
	for (int i = 0; i < K; i++) {
		int input;
		cin >> input;
		if (input == 0)
			st.pop();
		else
			st.push(input);
	}

	int answer = 0;

	int for_count = st.size();

	for (int i = 0; i < for_count; i++) {
		answer += st.top();
		st.pop();
	}

	cout << answer << "\n";
}