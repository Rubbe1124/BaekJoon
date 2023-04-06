#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string answer = "";

	while (true) {
		string input;
		cin >> input;

		answer = "";

		if (input == "0") {
			break;
		}
		for (int i = 0; i < input.length() / 2; i++) {
			if (input[i] == input[input.length() - 1 - i]) {

			}
			else {
				answer = "no";
			}
		}
		if (answer == "no") {
			cout << answer << "\n";
		}
		else {
			cout << "yes" << "\n";
		}
	}
}