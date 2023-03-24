#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void check(int input, int s_p);

int arr[4000001] = { 0, };
int ans = 0;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	arr[1] = 1;

	for (int i = 2; i < 4000001; i++) {
		if (arr[i] == 1) {

		}
		else {
			int temp = i;
			int idx = 2;
			while (temp * idx <= 4000000) {
				arr[temp * idx] = 1;
				idx++;
			}
		}
	}

	int input;
	cin >> input;

	check(input, input);
	cout << ans << "\n";
}

void check(int input,int s_p) {

	int total = 0;
	int start_index = -1;


	if (s_p < 0) {
		return;
	}
	for (int i = s_p; i > 0; i--) {
		if (arr[i] == 0) {
			if (start_index == -1) {
				start_index = i;
			}
			total += i;
			if (total == input) {
				ans++;
				check(input, start_index - 1);
				return;
			}
			else if (total > input) {
				check(input, start_index-1);
				return;
			}
		}
	}
	return;
}