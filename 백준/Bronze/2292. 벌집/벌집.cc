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

	int length = 0;
	int count = 1;
	int total = 1;
	while (true) {
		if (total >= N) {
			break;
		}
		total += (length+1) * 6;
		length++;
	}
	cout << length+1;
}