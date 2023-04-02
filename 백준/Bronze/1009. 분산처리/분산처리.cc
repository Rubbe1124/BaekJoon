#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector<int> vec[11];
	vec[0].push_back(10);
	vec[1].push_back(1);
	vec[2].push_back(2);
	vec[2].push_back(4);
	vec[2].push_back(8);
	vec[2].push_back(6);
	vec[3].push_back(3);
	vec[3].push_back(9);
	vec[3].push_back(7);
	vec[3].push_back(1);
	vec[4].push_back(4);
	vec[4].push_back(6);
	vec[5].push_back(5);
	vec[6].push_back(6);
	vec[7].push_back(7);
	vec[7].push_back(9);
	vec[7].push_back(3);
	vec[7].push_back(1);
	vec[8].push_back(8);
	vec[8].push_back(4);
	vec[8].push_back(2);
	vec[8].push_back(6);
	vec[9].push_back(9);
	vec[9].push_back(1);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int a, b;
		cin >> a >> b;
		while (a >= 10) {
			a -= 10;
		}
		cout << vec[a][(b-1) % vec[a].size()] << "\n";
	}
}