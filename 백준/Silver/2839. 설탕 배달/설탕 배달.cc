#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	int count = 0;

	int cal = N - (count * 3);

	while (true) {
		if (cal % 5 == 0) {
			count += cal / 5;
			break;
		}
		else {
			cal = cal - 3;
			count++;
		}
		if (cal < 0) {
			count = -1;
			break;
		}
		if (cal == 0) {
			break;
		}
	}
	cout << count;
}