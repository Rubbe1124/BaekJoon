#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio;

	vector<long long int> first = { 1,1,2 };
	vector<long long int> second = { 1,2,3 };

	for (int i = 3; i <= 51; i++) {
		first.push_back(second[i-1] + second[i - 3]);
		second.push_back(first[i] + first[i - 2]);
	}

	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;

		if (N % 2 == 0) {
			cout << second[N / 2 -1] << "\n";
		}
		else {
			cout << first[N / 2] << "\n";
		}
	}
}