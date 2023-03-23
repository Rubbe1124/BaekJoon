#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int last_num = 0;
vector<int> vec;

bool cal_shortest_distance(int d);

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int count;
	cin >> count;


	for (int i = 0; i < count; i++) {
		int input;
		cin >> input;
		if (i != 0) {
			vec.push_back(input - last_num);
		}

		last_num = input;
	}
	sort(vec.begin(), vec.end());


	int distance = vec[0];

	while (distance!=1) {
		if (cal_shortest_distance(distance)) {
			break;
		}
		else {
			distance -= 1;
		}
	}

	int answer = 0;

	for (int i = 0; i < vec.size(); i++) {
		answer+=vec[i] / distance - 1;
	}
	cout << answer << "\n";
}

bool cal_shortest_distance(int d) {
	for (int j = 0; j < vec.size(); j++) {
		if (vec[j] % d != 0) {
			return false;
		}
	}
	return true;
}