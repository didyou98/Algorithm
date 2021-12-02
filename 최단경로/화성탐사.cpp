/*
	화성 탐사
	작성일: 2021.12.01
	작성 언어: C++
	작성자: 성연재
	
	문제 
	당신은 화성 탐사 기계를 개발하는 프로그래머입니다. 그런데 화성은 에너지 공급원을 찾기가 힘듭니다.
	그래서 에너지를 효율적으로 사용하고자 화성 탐사 기계가 출발 지점에서 목표 지점까지 이동할 때,
	항상 최적의 경로를 찾도록 개발해야합니다.
	
	화성 탐사 기계가 존재하는 공간은 N x N 크기의 2차원 공간이며, 각각의 칸을 지나기 위한 비용이 존재합니다.
	가장 왼쪽 칸인[0][0]위치에서 가장 오른쪽 아래 칸인[N-1][N-1]로 이동하는 최소 비용을 출력하는 프로그램을
	작성하시오. 화성 탐사 기계는 특정한 위치에서 상하좌우 인접한 곳으로 1칸씩 이동할 수 있습니다.
	 
	입력
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

// 전체 공간 n, 테스트 케이스 testCase 
int n, testCase;

// 맵 전체 정보 
int graph[SIZE][SIZE];
// 최단 거리 정보 
int d[SIZE][SIZE];


// 상하좌우 
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

void dijkstra(int start)
{
	int x, y = 0;
	priority_queue<pair<int, pair<int, int>>> pq;
	// 시작지점 초기화 
	pq.push({-graph[x][y], {start, start}});
	d[x][y] = graph[x][y];
	while(!pq.empty())
	{
		int dist = -pq.top().first;
		x = pq.top().second.first;
		y = pq.top().second.second;
		pq.pop();
		if(d[x][y] < dist) continue;
		// 상하좌우 확인
		for(int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue; // 맵 밖으로 벗어나면 continue
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
		// 맵 정보 입력
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				cin >> graph[i][j];	
			}	
		}	
		// 테이블 초기화
		for(int i = 0; i < n; i++)
		{
			fill(d[i], d[i] + 125, INF);	
		}
		
		dijkstra(0);
		cout << d[n - 1][n -1] << endl;
	} 
	
	
} 
 
