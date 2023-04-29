#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<cmath>

using namespace std;

int arr[501][501] = { 0, };

int answer_time=0;
int answer_height=0;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M, B;

	cin >> N >> M >> B;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int input;
			cin >> input;
			arr[i][j] = input;
		}
	}

	for (int i = 0; i < 257; i++) {
		int temp_time = 0;
		int temp_inventory = B;
		bool flag = false;
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				if (arr[j][k] > i) {
					temp_time += (arr[j][k] - i) * 2;
					temp_inventory += (arr[j][k] - i);
				}
				else if (arr[j][k] < i) {
					//if (temp_inventory <= 0) {
					//	j = N;
					//	flag = !flag;
					//}
					temp_time += (i - arr[j][k]) * 1;
					temp_inventory -= (i - arr[j][k]);
				}
				else {

				}
			}
		}
		if (temp_inventory>=0) {
			if (i == 0) {
				answer_time = temp_time;
			}
			else {
				if (answer_time > temp_time) {
					answer_time = temp_time;
					answer_height = i;
				}
				else if (answer_time == temp_time && answer_height < i) {
					answer_height = i;
				}
			}
		}

	}

	cout << answer_time << " " << answer_height << "\n";
}