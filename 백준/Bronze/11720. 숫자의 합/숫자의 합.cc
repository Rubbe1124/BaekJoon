#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int temp;
	cin >> temp;

	string input;
	cin >> input;

	int count = 0;
	for (int i = 0; i < input.length(); i++) {
		count += (input[i] - '0');
	}
	cout << count << "\n";
}