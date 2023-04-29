#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<cmath>

using namespace std;

void sum(char a, int b);

long long answer = 0;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int L;
	cin >> L;

	string input;
	cin >> input;

	//int in = stoi(input);

	for (int i = 0; i < L; i++) {
		sum(input[i], i);
	}
	cout << answer;
}

void sum(char a, int b) {
	long long temp = a - '0';
	temp -= 48;
	temp = temp * (pow(31, b));

	answer += temp;
}