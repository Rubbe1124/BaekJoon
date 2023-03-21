#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int arr[50][50] = { 0, };
int for_dfs[50][50] = { 0, };

int N;
int M;

int answer = -1;
int temp_answer = 0;

void Dfs(int x, int y, int chicken_count);
void Cal_Temp_Answer();
int Check(int x, int y, int distance);

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int input;
			cin >> input;
			arr[i][j] = input;
			if (input == 1) {
				for_dfs[i][j] = input;
			}
		}
	}

	Dfs(0, 0, 0);
	cout << answer << "\n";
}

void Dfs(int x, int y, int chicken_count) {
	if (chicken_count == M) {
		Cal_Temp_Answer();
		if (answer == -1)answer = temp_answer;
		if (answer > temp_answer)answer = temp_answer;
		return;
	}
	for (int i = x; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == x && j <= y && chicken_count != 0) {
				continue;
			}
			if (arr[i][j] == 2) {
				for_dfs[i][j] = 2;
				Dfs(i, j, chicken_count + 1);
				for_dfs[i][j] = 0;
			}
		}
	}
}

void Cal_Temp_Answer() {
	int count = 0;
	temp_answer = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (for_dfs[i][j] == 1) {
				count += Check(i, j, 1);
			}
		}
	}
	temp_answer = count;
}

//int check;
//int Check(int x, int y, int distance) {
//
//	int x_distance;
//	int y_distance;
//
//	check = -1;
//
//	for (int i = distance * -1; i <= distance; i++) {
//		for (int j = distance * -1; j <= distance; j++) {
//			if ((x + i) >= 0 && (y + j) >= 0 && (x + i) <= (N - 1) && (y + j) <= (N - 1) && (for_dfs[x + i][y + j]) == 2) {
//				x_distance = i;
//				y_distance = j;
//				if (x_distance < 0)x_distance *= -1;
//				if (y_distance < 0)y_distance *= -1;
//
//				if (check == -1) {
//					check = x_distance + y_distance;
//				}
//				if (check > x_distance + y_distance) {
//					check = x_distance + y_distance;
//				}
//			}
//		}
//	}
//	if (check == -1) {
//		Check(x, y, distance + 1);
//	}
//	return check;
//}

int Check(int x, int y, int distance) {

	int x_distance;
	int y_distance;

	int a, b;

	int check = -1;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (for_dfs[i][j] == 2) {
				a = x - i;
				b = y - j;
				if (a < 0)a *= -1;
				if (b < 0)b *= -1;
				if (check == -1) {
					check = a + b;
				}
				if (check > a + b) {
					check = a + b;
				}
			}
		}
	}
	//if (check == -1) {
	//	Check(x, y, distance + 1);
	//}
	return check;
}