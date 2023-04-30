#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<cmath>

using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, r, c;
	cin >> N >> r >> c;

	int count = 0;

	int big_count = 0;

	int size = pow(2, N-1);

	int answer = 0;
	
	while (true) {
		if (r / size == 0 && c / size == 0) {

		}
		else if (r / size == 0 && c / size == 1) {
			answer += size * size;
			c %= size;
		}
		else if (r / size == 1 && c / size == 0) {
			answer += size * size * 2;
			r %= size;
		}
		else if (r / size == 1 && c / size == 1) {
			answer += size * size * 3;
			c %= size;
			r %= size;
		}
		size /= 2;
		if (size == 0) {
			break;
		}

	}
	cout << answer << "\n";
}