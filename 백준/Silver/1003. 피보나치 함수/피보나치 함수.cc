#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

    int T;
    cin >> T;

    int arr0[41] = { 0, };
    int arr1[41] = { 0, };

    arr0[0] = 1;
    arr1[0] = 0;
    arr0[1] = 0;
    arr0[2] = 1;
    arr1[1] = 1;
    arr1[2] = 1;

    for (int i = 3; i < 41; i++) {
        arr0[i] = arr0[i - 1] + arr0[i - 2];
        arr1[i] = arr1[i - 1] + arr1[i - 2];
    }
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;

        cout << arr0[N] << " " << arr1[N] << "\n";
    }
}