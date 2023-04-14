#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long N, M;
	cin >> N >> M;

	vector<long long> vec;

	for (int i = 0; i < N; i++) {
		long long input;
		cin >> input;
		vec.push_back(input);
	}
	/*sort(vec.begin(), vec.end());

	int index = 0;

	for (int i = vec.size() - 1; i >= 0; i--) {
		long long count = 0;
		for (int j = vec.size() - 1; j >= i; j--) {
			count += vec[j] - vec[i];
		}
		if (count < M) {

		}
		else {
			index = i;
			break;
		}
	}*/

	long long low = 0;
	long long high = 1000000000;

	long long last = low;

	while (high>=low) {
		long long mid = (low + high) / 2;
		long long count = 0;
		for (int j = vec.size() - 1; j >= 0; j--) {
			if (vec[j] - (mid) > 0) {
				count += vec[j] - (mid);
				if (count >= M) {
					j = - 1;
				}
			}
		}
		if (count < M) {
			high = mid-1;
		}
		else {
			last = mid;
			low = mid+1;
		}
	}
	cout << last;
}