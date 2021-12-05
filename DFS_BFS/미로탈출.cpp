/*
	�̷�Ż�� 
	�ۼ���: 2021.12.05
	�ۼ��� : ������
	�ۼ� ��� : C++
	
	����
	�����̴� N x M ũ���� ���簢�� ������ �̷ο� ���� �ִ�. �̷ο��� ���� ������ ������ �־� �̸� ����
	Ż���ؾ� �Ѵ�. �������� ��ġ�� (1, 1)�̰� �̷��� �ⱸ�� (N, M)�� ��ġ�� �����ϸ� �� ���� �� ĭ�� 
	�̵��� �� �ִ�. �̶� ������ �ִ� �κ��� 0����, ������ ���� �κ��� 1�� ǥ�õǾ� �ִ�. �̷δ� �ݵ��
	Ż���� �� �ִ� ���·� ���õȴ�. �̶� �����̰� Ż���ϱ� ���� ���������ϴ� �ּ� ĭ�� ������ ���Ͻÿ�.
	ĭ�� �� ���� ����ĭ�� ������ ĭ�� ��� �����ؼ� ����Ѵ�. 
	  
	 
	�Է�����
	1. ù° �ٿ� �� ���� N, M(4 <= N, M <= 200)�� �־����ϴ�. ���� N���� �ٿ��� ���� M���� ���� (0 Ȥ�� 1)
	�� �̷��� ������ �־�����. ������ ������ ���� ���� �پ �Է����� ���ŵȴ�. ���� ���� ĭ�� ������ ĭ��
	�׻� 1�̴�. 

	��� ���� 
	1. ù° �ٿ� �ּ� �̵� ĭ�� ������ ����մϴ�. 
	
	
	�Է¿���
	5 6
	101010
	111111
	000001
	111111
	111111
	
	
	
	��¿���
	10
*/

#include <bits/stdc++.h>
#define INF 1e9
using namespace std;

int n, m;
int maze[200][200];
int visited[200][200];
int result = 0;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

void bfs(int x, int y)
{
	queue<pair<int, int>> que;
	visited[x][y] = true;
	que.push({x, y});

	while(!que.empty())
	{
		int nx, ny = 0;
		int x = que.front().first;
		int y = que.front().second;
		que.pop();
		cout << "(" << x << "," << y << ") " << maze[x][y] <<endl;
		for(int i = 0; i < 4; i++)
		{
			nx = x + dx[i];
			ny = y + dy[i];
			if(maze[nx][ny] == 0) continue;
			if(nx < 0 || ny < 0 || nx > n || ny > m) continue;
			if(!visited[nx][ny] && maze[nx][ny] == 1)
			{
				maze[nx][ny] = maze[x][y] + 1;
				que.push({nx, ny});
				visited[nx][ny] = true;
			}
		}
	}
}

int main(void)
{
	cin >> n >> m;
	for(int i = 0; i < m; i++)
	{
		fill(maze[i], maze[i] + 1000, INF);
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf("%1d", &maze[i][j]);
		}
	}
	
	bfs(0, 0);
	
	cout << maze[n - 1][m - 1] << endl;
} 
