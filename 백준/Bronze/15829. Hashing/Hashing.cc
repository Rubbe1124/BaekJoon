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
long long r = 1;

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
	cout << answer%1234567891;
}

void sum(char a, int b) {
	int temp = a - '0';
	temp -= 48;

	answer += (temp * r) % 1234567891;
	r = (r * 31) % 1234567891;
}