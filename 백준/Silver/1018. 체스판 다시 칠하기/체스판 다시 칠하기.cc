#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

char arr[51][51];

int answer = -1;

void check(int i, int j);

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		string input;
		cin >> input;
		for (int j = 0; j < M; j++) {
			arr[i][j] = input[j];
		}
	}
	for (int i = 0; i < N-7; i++) {
		for (int j = 0; j < M-7; j++) {
			check(i, j);
		}
	}
	cout << answer << "\n";
}

void check(int i, int j) {
	bool flag = true;
	int count1 = 0;
	int count2 = 0;
	for (int x = 0; x < 8; x++) {
		for (int y = 0; y < 8; y++) {
			if (arr[x + i][y + j] == 'W') {
				if (flag) {
					count2++;
				}
				else {
					count1++;
				}
			}
			else {
				if (flag) {
					count1++;
				}
				else {
					count2++;
				}
			}
			flag = !flag;
		}
		flag = !flag;
	}
	if (answer == -1) {
		answer = count1;
	}
	if (answer > count1) {
		answer = count1;
	}
	if (answer > count2) {
		answer = count2;
	}
}