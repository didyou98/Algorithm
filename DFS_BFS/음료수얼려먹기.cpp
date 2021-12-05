/*
	����� ����Ա� 
	�ۼ���: 2021.12.05
	�ۼ��� : ������
	�ۼ� ��� : C++
	
	����
	N x M ũ���� ���� Ʋ�� �ִ�. ������ �շ��ִ� �κ��� 0, ĭ���̰� �����ϴ� �κ��� 1�� ǥ�õȴ�.
	������ �շ� �ִ� �κг��� ��, ��, ��, ��� �پ� �ִ� ��� ���� ����Ǿ� �ִ� ������ �����Ѵ�.
	�̶� ���� Ʋ�� ����� �־����� �� �� ���̽�ũ���� ������  ���ϴ� ���α׷��� �ۼ��Ͻÿ�, 
	  
	 
	�Է�����
	1. ù° �ٿ� ���� Ʋ�� ���α��� N�� ���α��� M�� �־�����.(1 <= N, M <= 1000)
	2. ��° �ٺ��� N + 1�� �ٱ��� ��ƴƲ�� ���°� �־�����. 

	��� ���� 
	1. �� ���� ���� �� �ִ� ���̽�ũ���� ������ ����Ѵ�. 
	
	
	�Է¿���
	4 5
	00110
	00011
	11111
	00000
	
	
	��¿���
	3
*/

#include <bits/stdc++.h>
#define INF 1e9 
using namespace std;

int n, m;
int ice[1000][1000];
int visited[1000][1000];
int result = 0;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

void dfs(int x, int y)
{
	visited[x][y] = true;
	cout << "(" << x << "," << y << ")" << endl;
	for(int i = 0; i < 4; i++)
	{
		int nx, ny = 0;
		nx = x + dx[i];
		ny = y + dy[i];
		if(nx < 0 || ny < 0 || nx > n || ny > m) continue;
		if(!visited[nx][ny] && ice[nx][ny] == 0)
		{
			ice[nx][ny] = 1;
			dfs(nx, ny);
		}
	}
}

int main(void)
{
	cin >> n >> m;
	for(int i = 0; i < m; i++)
	{
		fill(ice[i], ice[i] + 1000, INF);
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf("%1d", &ice[i][j]);
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(ice[i][j] == 0)
			{
				dfs(i, j);
				result++;
			}
			else
			{
				continue;
			}
			
		}
	}
	
	cout << result << endl;
} 
