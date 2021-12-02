/*
	ȭ�� Ž��
	�ۼ���: 2021.12.01
	�ۼ� ���: C++
	�ۼ���: ������
	
	���� 
	����� ȭ�� Ž�� ��踦 �����ϴ� ���α׷����Դϴ�. �׷��� ȭ���� ������ ���޿��� ã�Ⱑ ����ϴ�.
	�׷��� �������� ȿ�������� ����ϰ��� ȭ�� Ž�� ��谡 ��� �������� ��ǥ �������� �̵��� ��,
	�׻� ������ ��θ� ã���� �����ؾ��մϴ�.
	
	ȭ�� Ž�� ��谡 �����ϴ� ������ N x N ũ���� 2���� �����̸�, ������ ĭ�� ������ ���� ����� �����մϴ�.
	���� ���� ĭ��[0][0]��ġ���� ���� ������ �Ʒ� ĭ��[N-1][N-1]�� �̵��ϴ� �ּ� ����� ����ϴ� ���α׷���
	�ۼ��Ͻÿ�. ȭ�� Ž�� ���� Ư���� ��ġ���� �����¿� ������ ������ 1ĭ�� �̵��� �� �ֽ��ϴ�.
	 
	�Է�
	3
	3
	5 5 4
	3 9 1
	3 2 7
	5
	3 7 2 0 1
	2 8 0 9 1
	1 2 1 8 1
	9 8 9 2 0
	3 6 5 1 5
	7
	9 0 5 1 1 5 3
	4 1 2 1 6 5 3
	0 7 6 1 6 8 5
	1 1 7 8 3 2 3
	9 4 0 7 6 4 1
	5 8 3 2 4 8 3
	7 4 8 4 8 3 4 
*/

#include <bits/stdc++.h>
#define SIZE 125
#define INF 1e9

using namespace std;

// ��ü ���� n, �׽�Ʈ ���̽� testCase 
int n, testCase;

// �� ��ü ���� 
int graph[SIZE][SIZE];
// �ִ� �Ÿ� ���� 
int d[SIZE][SIZE];


// �����¿� 
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

void dijkstra(int start)
{
	int x, y = 0;
	priority_queue<pair<int, pair<int, int>>> pq;
	// �������� �ʱ�ȭ 
	pq.push({-graph[x][y], {start, start}});
	d[x][y] = graph[x][y];
	while(!pq.empty())
	{
		int dist = -pq.top().first;
		x = pq.top().second.first;
		y = pq.top().second.second;
		pq.pop();
		if(d[x][y] < dist) continue;
		// �����¿� Ȯ��
		for(int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue; // �� ������ ����� continue
			int cost = dist + graph[nx][ny];
			if(cost < d[nx][ny])
			{
			    d[nx][ny] = cost;
                pq.push({-cost, {nx, ny}});
			}
			
		} 
	} 
}

int main(void)
{
	cin >> testCase;
	
	for(int tc = 0; tc < testCase; tc++)
	{
		cin >> n;
		// �� ���� �Է�
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				cin >> graph[i][j];	
			}	
		}	
		// ���̺� �ʱ�ȭ
		for(int i = 0; i < n; i++)
		{
			fill(d[i], d[i] + 125, INF);	
		}
		
		dijkstra(0);
		cout << d[n - 1][n -1] << endl;
	} 
	
	
} 
 
