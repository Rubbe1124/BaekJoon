#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<unordered_map>

using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<int> vec;

	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		vec.push_back(input);
	}

	sort(vec.begin(), vec.end());

	int answer = 0;
	for (int i = 0; i < N; i++) {
		answer += vec[i] * (vec.size() - i);
	}
	cout << answer << "\n";
}