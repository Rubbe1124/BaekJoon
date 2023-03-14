#include <iostream>
#include <algorithm>
#include<vector>

using namespace std;

int main() {
	vector<int> array;
	int index;

	cin >> index;

	for (int i = 0; i < index; i++) {
		int temp;
		cin >> temp;

		array.push_back(temp);
	}

	sort(array.begin(), array.end());

	for (int i = 0; i < index; i++) {
		cout << array[i] << "\n";
	}
}