#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int count;
	cin >> count;

	vector<pair<int, int>> vec;

	for (int i = 0; i < count; i++) {
		int temp1;
		cin >> temp1;
		int temp2;
		cin >> temp2;

		vec.push_back(make_pair(temp2, temp1));
	}

	sort(vec.begin(), vec.end());

	vector<pair<int, int>>::iterator iter;

	for (iter = vec.begin(); iter != vec.end(); iter++) {
		cout << iter->second << " " << iter->first << "\n";
	}
}