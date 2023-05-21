#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<unordered_map>

using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	unordered_map<string,string> no_see;
	vector<string> vec;

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		string input;
		cin >> input;
		no_see.insert({ input, "" });
	}
	for (int i = 0; i < M; i++) {
		string input;
		cin >> input;
		if (no_see.find(input) != no_see.end()) {
			vec.push_back(input);
		}
		else {

		}
	}
	sort(vec.begin(), vec.end());

	cout << vec.size() << "\n";
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << "\n";
	}
}