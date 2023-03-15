#include<iostream>
#include<algorithm>
#include<vector>
#include<list>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string st;
	cin >> st;

	list<char> li;

	for (int i = 0; i < st.size(); i++) {
		li.push_back(st[i]);
	}

	list<char>::iterator cursor = li.end();

	int count;
	cin >> count;

	for (int i = 0; i < count; i++) {

		string order;
		cin >> order;

		if (order == "L") {
			if (cursor != li.begin()) {
				cursor--;
			}
		}
		else if (order == "D") {
			if (cursor != li.end()) {
				cursor++;
			}
		}
		else if (order == "B") {
			if (cursor != li.begin()) {
				cursor--;
				cursor=li.erase(cursor);
			}
		}
		else if (order == "P") {
			char temp;
			cin >> temp;
			li.insert(cursor, temp);
		}
	}

	for (cursor = li.begin(); cursor != li.end(); cursor++) {
		cout << *cursor;
	}
}