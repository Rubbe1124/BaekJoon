#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	int check = N - 1;

	int answer = 0;

	while (check != 0) {
		string temp = to_string(check);
		int count = check;
		for (int i = 0; i < temp.length(); i++) {
			count += temp[i] - '0';
		}
		if (count == N) {
			answer = check;
		}
		check--;
	}
	cout<<answer;
}