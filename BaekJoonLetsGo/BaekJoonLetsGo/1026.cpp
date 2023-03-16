#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int count = 0;
	cin >> count;

	vector<int> vec1;
	vector<int> vec2;


	for (int i = 0; i < count; i++) {
		int temp;
		cin >> temp;
		vec1.push_back(temp);
	}
	for (int i = 0; i < count; i++) {
		int temp;
		cin >> temp;
		vec2.push_back(temp);
	}

	sort(vec1.begin(), vec1.end());
	sort(vec2.begin(), vec2.end());

	int result = 0;

	for (int i = 0; i < count; i++) {
		result += vec1[i] * vec2[count - i - 1];
	}

	cout << result;
}