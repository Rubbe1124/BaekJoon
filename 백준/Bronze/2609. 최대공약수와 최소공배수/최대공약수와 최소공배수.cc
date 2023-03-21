#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int gcd(int i, int j);

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int first, second;
	cin >> first >> second;

	int first_answer;
	first_answer = gcd(first, second);

	cout << first_answer << "\n";


	cout << first * second / first_answer << "\n";

}

int gcd(int i, int j) {
	return i % j == 0 ? j : gcd(j, i % j);
}