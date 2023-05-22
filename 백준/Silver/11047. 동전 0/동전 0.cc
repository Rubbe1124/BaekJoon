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

	vector<int> vec;

	int N, K;
	cin >> N >> K;

	int answer = 0;

	for (int i = 0; i < N; i++) {
		int coin;
		cin >> coin;
		vec.push_back(coin);
	}

	int coin_count = vec.size() - 1;
	int coin_value = vec[coin_count];
	while (true) {
		if (K == 0) {
			cout << answer << "\n";
			break;
		}
		if (K - coin_value >= coin_value) {
			K = K - coin_value;
			answer++;
		}
		else if (K - coin_value >= 0) {
			K = K - coin_value;
			coin_count--;
			coin_value = vec[coin_count];
			answer++;
		}
		else {
			coin_count--;
			coin_value = vec[coin_count];
		}
	}
}