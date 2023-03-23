#include<iostream>
#include<algorithm>
#include<vector>
#include<deque>

using namespace std;

int arr[9][9] = { 0, };
int zero_count = 0;

deque<pair<int, int>> zero_1;
deque<pair<int, int>> zero_2;

void BackTracking();
bool check(int y, int x);

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			int input;
			cin >> input;
			arr[i][j] = input;
			if (input == 0) {
				zero_count++;
				zero_2.push_back(make_pair(i, j));
			}
		}
	}
	BackTracking();
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}

bool backTracking_end_flag = false;

void BackTracking() {
	if (zero_2.size() == 0) {
		backTracking_end_flag = true;

		return;
	}

	int backTracking_Size = zero_2.size();

	//for (int i = 0; i < backTracking_Size; i++) {
	for (int j = 1; j < 10; j++) {
		arr[zero_2.front().first][zero_2.front().second] = j;
		if (check(zero_2.front().first, zero_2.front().second)) {
			zero_1.push_back(zero_2.front());
			zero_2.pop_front();
			BackTracking();
			if (backTracking_end_flag) {
				return;
			}
			zero_2.push_front(zero_1.back());
			zero_1.pop_back();
		}
		arr[zero_2.front().first][zero_2.front().second] = 0;
	}
		
	//}
}

bool check(int y, int x) {
	for (int i = 0; i < 9; i++) {
		if (arr[y][i] == arr[y][x]&&i!=x) {
			return false;
		}
		if (arr[i][x] == arr[y][x] && i != y) {
			return false;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (y / 3 * 3 + i == y && x / 3 * 3 + j == x) {
				continue;
			}
			else{
				if (arr[y / 3 * 3 + i][x / 3 * 3 + j] == arr[y][x]) {
					return false;
				}
			}

		}
	}
	return true;
}