#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int arr[26] = { 0, };

	string input;
	cin >> input;

	for (int i = 0; i < input.length(); i++) {
		if (input[i] - 'a' >= 0) {
			arr[input[i] - 'a']++;
		}
		else {
			arr[input[i] - 'A']++;
		}
	}

	int count = 0;
	int temp = -1;
	for (int i = 0; i < 26; i++) {
		if (arr[i] == 0) {

		}
		else {
			if (count == 0) {
				count = arr[i];
				temp = i;
			}
			else {
				if (count < arr[i]) {
					count = arr[i];
					temp = i;
				}
				else if (count == arr[i]) {
					temp = -1;
				}
			}
		}
	}
	if (temp == -1) {
		cout << "?\n";
	}
	else {
		cout << (char)(temp + 'A');
	}

}