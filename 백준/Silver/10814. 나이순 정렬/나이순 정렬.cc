#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<string> vec[201];

	for (int i = 0; i < N; i++) {
		int age;
		string name;

		cin >> age >> name;
		vec[age].push_back(name);
	}

	for (int i = 1; i < 201; i++) {
		for (int j = 0; j < vec[i].size(); j++) {
			cout << i << " " << vec[i][j] << "\n";
		}
	}
}