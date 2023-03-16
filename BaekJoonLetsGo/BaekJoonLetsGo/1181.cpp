#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int count;
	cin >> count;

	vector<string> vec[51];

	for (int i = 0; i < count; i++) {
		string temp;
		cin >> temp;
		vec[temp.length()].push_back(temp);
	}

	for (int i = 0; i < 51; i++) {
		sort(vec[i].begin(), vec[i].end());
		vec[i].erase(unique(vec[i].begin(), vec[i].end()), vec[i].end());
	}

	for (int i = 0; i < 51; i++) {
		for (int j = 0; j < vec[i].size(); j++) {
			cout << vec[i][j] << "\n";
			}
		}
	
}