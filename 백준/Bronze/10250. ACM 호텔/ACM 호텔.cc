#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);



	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int H, W, N;
		cin >> H >> W >> N;

		int x, y;
		y = N / H;
		x = N % H;
		if (x == 0) {
			x = H;
			y = y - 1;
		}
		int answer = (x) * 100 + y+1;
		cout << answer << "\n";
	}
}