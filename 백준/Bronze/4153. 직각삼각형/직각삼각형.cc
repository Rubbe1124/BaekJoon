#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	while (true) {
		int a, b, c;
		cin >> a >> b >> c;

		a = a * a;
		b = b * b;
		c = c * c;
		if (c == 0) {
			break;
		}
		if (a == b + c) {
			cout << "right\n";
		}
		else if (b == a + c) {
			cout << "right\n";
		}
		else if (c == b + a) {
			cout << "right\n";
		}
		else {
			cout << "wrong\n";
		}
	}
}