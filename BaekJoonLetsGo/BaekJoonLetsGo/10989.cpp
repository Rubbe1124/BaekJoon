#include <iostream>
#include <algorithm>
#include<vector>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int array[10001] = { 0, };

	int index;
	cin >> index;

	for (int i = 0; i < index; i++)
	{
		int temp;
		cin >> temp;
		array[temp]++;
	}

	for (int i = 1; i < 10001; i++) {
		if (array[i] != 0) {
			for (int j = 0; j < array[i]; j++) {
				cout << i << "\n";
			}
		}
	}
}