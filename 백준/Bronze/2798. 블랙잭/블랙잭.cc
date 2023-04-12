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

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		vec.push_back(input);
	}

	int answer = 0;

	for (int i = 0; i < vec.size()-2; i++) {
		for (int j = i+1; j < vec.size()-1; j++) {
			for (int k = j+1; k < vec.size(); k++) {
				int temp = vec[i] + vec[j] + vec[k];
				if (temp > answer&& temp <= M) {
					answer = temp;
				}
			}
		}
	}
	cout << answer;
}