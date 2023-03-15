#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector<int> array;

	int count_1;
	cin >> count_1;

	for (int i = 0; i < count_1; i++) {
		int temp;
		cin >> temp;
		array.push_back(temp);
	}

	sort(array.begin(), array.end());

	int count_2;
	cin >> count_2;

	for (int i = 0; i < count_2; i++) {
		int temp;
		cin >> temp;
		cout << binary_search(array.begin(), array.end(), temp)<<" ";
	}
}