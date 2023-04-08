#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector<int> vec;

	int K, N;
	cin >> K >> N;
	for (int i = 0; i < K; i++) {
		int input;
		cin >> input;
		vec.push_back(input);
	}

	sort(vec.begin(), vec.end());

	long long low = 1;
	long long high = vec[vec.size() - 1];

	int answer = 0;

	while (low<=high) {

		long long mid = (high + low) / 2;

		int temp = 0;

		for (int i = 0; i < vec.size(); i++) {
			temp += vec[i] / mid;
		}
		if (temp >= N) {
			low = mid+1;
			if (answer < mid) {
				answer = mid;
			}
		}
		else {
			high = mid-1;
		}
	}
	cout << answer << "\n";
}