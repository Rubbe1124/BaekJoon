#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int arr[1000001] = { 0, };

	arr[1] = 1;

	for (int i = 2; i < 1000001; i++) {
		if (arr[i] == 1) {

		}
		else {
			int temp = i;
			int idx = 2;
			while (temp * idx <= 1000000) {
				arr[temp * idx] = 1;
				idx++;
			}
		}
	}
	
	int M = 0;
	int N = 0;
	cin >> M >> N;

	int i = 0;

	for (i = M; i <= N; i++) {
		if (arr[i] == 0) {
			cout << i << "\n";
		}
	}
}