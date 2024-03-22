#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector<pair<long long, long long>> l;

	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		long long start, end;

		cin >> start >> end;

		l.push_back(make_pair(start, end));
	}

	sort(l.begin(), l.end());

	/*
	for (int i = 0; i < l.size(); i++)
	{
		cout << i + 1 << "번: " << l[i].first << " " << l[i].second << "\n";
	}
	*/

	pair<long long, long long> temp = make_pair(-1, -1);

	int answer = 0;

	for (int i = 0; i < l.size(); i++)
	{
		if (temp.first == -1)
		{
			temp = l[i];
			answer++;
		}
		else
		{
			if (l[i].first >= temp.second)
			{
				temp = l[i];
				answer++;
			}
			else if (l[i].second < temp.second)
			{
				temp = l[i];
			}
		}
	}
	cout << answer << "\n";
}