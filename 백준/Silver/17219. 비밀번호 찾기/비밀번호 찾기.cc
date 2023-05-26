#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<unordered_map>

using namespace std;


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	unordered_map<string,string> u_m;
	unordered_map<string, string>::iterator p;

	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		string input1;
		cin >> input1;
		string input2;
		cin >> input2;

		u_m[input1]= input2;
	}


	for (int i = 0; i < M; i++) {
		string input;
		cin >> input;
		auto iter = u_m.find(input);
		if (iter != u_m.end())
		{
			std::cout << iter->second<<"\n";
		}
		else {
			cout << "???" << "\n";
		}
	}
}