#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int A, B, V;
	cin >> A >> B >> V;

	V = V - A;
	int answer = 0;
	answer++;
	if (V == 0) {
	}
	else {
		if (V % (A - B) != 0) {
			answer++;
		}
		answer += V / (A - B);
	}

	cout << answer;
}