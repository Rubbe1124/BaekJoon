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

	int count = 666;


	while (true) {
		string sti = to_string(count);
		int check = 0;
		for (int i = 0; i < sti.length(); i++) {
			if (sti[i] == '6') {
				check++;
			}
			else {
				check = 0;
			}
			if (check >= 3) {
				N = N - 1;
				i = sti.length();
			}
		}
		if (N == 0) {
			cout << count << "\n";
			break;
		}
		else {
			count = count + 1;
		}
	}
}