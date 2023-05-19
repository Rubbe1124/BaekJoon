#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	int total_count_two = 0;
	int total_count_five = 0;

	int temp = 0;

	for (int i = N; i > 0; i--) {
		temp = i;

		while (true) {
			if (temp % 2 == 0) {
				temp = temp / 2;
				total_count_two++;
			}
			else {
				break;
			}
		}

		temp = i;

		while (true) {
			if (temp % 5 == 0) {
				temp = temp / 5;
				total_count_five++;
			}
			else {
				break;
			}
		}
	}

	cout << min(total_count_two, total_count_five) << "\n";
}