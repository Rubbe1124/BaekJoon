#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector<int> vec;

	int count;

	cin >> count;

	for (int i = 0; i < count; i++) {
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}

	sort(vec.begin(), vec.end());

	int order;
	cin >> order;

	for (int i = 0; i < order; i++) {
		int temp;
		cin >> temp;

		vector<int>::iterator it1 = upper_bound(vec.begin(), vec.end(), temp);
		vector<int>::iterator it2 = lower_bound(vec.begin(), vec.end(), temp);

		cout << it1 - it2 << " ";
	}
}