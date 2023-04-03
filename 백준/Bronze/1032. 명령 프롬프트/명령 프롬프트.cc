#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector<char> vec;

	char arr[51];

	int N;
	cin >> N;

	int length;

	for (int i = 0; i < N; i++) {
		string input;
		cin >> input;
		if (i == 0) {
			length = input.length();
			for (int j = 0; j < length; j++) {
				arr[j] = input[j];
			}
		}
		else {
			for (int j = 0; j < length; j++) {
				if (arr[j] != input[j]) {
					arr[j] = '?' ;
				}
			}
		}
	}
	for (int i = 0; i < length; i++) {
		cout << arr[i];
	}
	cout << "\n";
}