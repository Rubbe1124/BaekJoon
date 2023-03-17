#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int count;
	cin >> count;

	int idx = 1;

	stack<int> intStack;

	string ans = "";

	for (int i = 0; i < count; i++) {
		int order;
		cin >> order;

		while (idx <= order) {
			intStack.push(idx);
			ans += "+\n";
			idx++;
		}
		if (intStack.top() == order) {
			intStack.pop();
			ans += "-\n";
		}
		else{
			ans = "NO\n";
			break;
		}
	}
	cout << ans;
}