#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>

using namespace std;

int main() {

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int count;
		cin >> count;

		map<string, int> m;
		for (int j = 0; j < count; j++)
		{
			string input1, input2;
			cin >> input1 >> input2;

			if (m.find(input2) == m.end()) {
				m.insert({ input2, 1 });
			}
			else {
				m[input2]++;
			}
		}
		int answer=1;
		for (auto iter : m) {
			answer *= (iter.second + 1);
		}
		cout << answer - 1 << "\n";
	}
}