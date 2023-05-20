#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int arr[21] = { 0, };

	int M;
	cin >> M;

	for (int i = 0; i < M; i++) {
		string input;
		cin >> input;
		int x;
		if (input == "all" || input == "empty") {

		}
		else {
			cin >> x;
		}

		if (input == "add") {
			arr[x] = 1;
		}
		else if (input == "remove") {
			arr[x] = 0;
		}
		else if (input == "check") {
			if (arr[x] == 1) {
				cout << "1" << "\n";
			}
			else {
				cout << "0" << "\n";
			}
		}
		else if (input == "toggle") {
			if (arr[x] == 0) {
				arr[x] = 1;
			}
			else {
				arr[x] = 0;
			}
		}
		else if (input == "all") {
			for (int i = 1; i < 21; i++) {
				arr[i] = 1;
			}
		}
		else {
			for (int i = 1; i < 21; i++) {
				arr[i] = 0;
			}
		}
	}
}