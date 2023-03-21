#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int arr[1001] = { 0, };

	arr[1] = 1;

	for (int i = 2; i < 1001; i++) {
		if (arr[i] == 1) {

		}
		else {
			int temp = i;
			int idx = 2;
			while (temp * idx <= 1000) {
				arr[temp * idx] = 1;
				idx++;
			}
		}
	}
	int count;
	cin >> count;

	int answer = 0;
	for (int i = 0; i < count; i++) {
		int input;
		cin >> input;

		if (arr[input] == 0) answer++;
	}

	cout << answer << "\n";
}