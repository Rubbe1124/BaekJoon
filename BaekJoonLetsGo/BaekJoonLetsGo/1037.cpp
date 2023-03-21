#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int count;
	cin >> count;

	vector<int> vec;

	for (int i = 0; i < count; i++) {
		int order;
		cin >> order;

		vec.push_back(order);
	}

	sort(vec.begin(), vec.end());

	cout << vec[0] * vec[vec.size()-1];
}