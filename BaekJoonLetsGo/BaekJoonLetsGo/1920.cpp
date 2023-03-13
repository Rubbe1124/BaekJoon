#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int first_index;
	vector<int> array = {};
	int second_index;

	cin >> first_index;
	for (int i = 0; i < first_index; i++) {
		int input;
		cin >> input;
		array.push_back(input);
	}

	sort(array.begin(), array.end());

	cin >> second_index;

	for (int i = 0; i < second_index; i++) {
		int input;
		cin >> input;
		int temp = 0;
		if (binary_search(array.begin(), array.end(), input)) {
			temp = 1;
		}
		cout << temp << "\n";
		temp = 0;
	}
}