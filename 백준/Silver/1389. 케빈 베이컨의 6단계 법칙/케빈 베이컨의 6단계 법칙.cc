#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int check[501][501] = { 0, };

int N, M;

void bfs(int i);

int main()
{

	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		int A, B;
		cin >> A >> B;
		check[A][B] = 1;
		check[B][A] = 1;
	}

	for (int i = 1; i <= N; i++)
	{
		bfs(i);
	}

	int answer = -1;

	int total = 0;

	for (int i = 1; i <= N; i++)
	{
		int temp = 0;
		//cout << i << "의 값: ";
		for (int j = 1; j <= N; j++)
		{
			//cout << check[i][j] << " ";
			temp += check[i][j];
		}
		//cout << "\n";
		//cout << "총: " << temp << "\n";
		if (answer == -1)
		{
			answer = i;
			total = temp;
		}
		else
		{
			if (total > temp)
			{
				answer = i;
				total = temp;
			}
		}
	}
	cout << answer << "\n";

}

void bfs(int i)
{
	queue<pair<int, int>> que;

	for (int count = 1; count <= N; count++)
	{
		if (check[i][count] == 1)
		{
			que.push(make_pair(count,1));
		}
	}
	while (!que.empty())
	{
		int temp = que.front().first;
		for (int count = 1; count <= N; count++)
		{
			if (i == count)
				continue;
			if (check[temp][count] == 1)
			{
				if (check[i][count] != 0)
				{

				}
				else
				{
					que.push(make_pair(count, que.front().second+1));
					check[i][count] = que.front().second+1;
				}
			}
		}
		que.pop();
	}
}