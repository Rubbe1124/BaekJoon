#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int arr[8][8];

	bool flag = false;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (!flag) {
				arr[i][j] = 0;
			}
			else {
				arr[i][j] = 1;
			}
			flag = !flag;
		}
		flag = !flag;
	}

	int answer = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			char input;
			cin >> input;

			if (input == 'F'&&arr[i][j]==0) {
				answer++;
			}
		}
	}
	cout << answer << "\n";
}