#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<string>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string problem;
	cin >> problem;

	string temp = "";

	vector<int> number;
	vector<char> cal_symbol;

	for (int i = 0; i < problem.length(); i++)
	{
		if (problem[i] == '-' || problem[i] == '+')
		{
			cal_symbol.push_back(problem[i]);
			continue;
		}
		temp += problem[i];
		if (problem[i + 1] == '-' || problem[i + 1] == '+')
		{
			number.push_back(stoi(temp));
			temp = "";
		}
	}
	if (temp != "")
	{
		number.push_back(stoi(temp));
	}
	for (int i = 0; i < cal_symbol.size(); i++)
	{
		if (cal_symbol[i] == '+')
		{
			number[i + 1] += number[i];
			number.erase(number.begin() + i);
			cal_symbol.erase(cal_symbol.begin() + i);
			i--;
		}
	}

	int answer = number[0];
	for (int i = 1; i < number.size(); i++)
	{
		answer -= number[i];
	}
	cout << answer << "\n";
}