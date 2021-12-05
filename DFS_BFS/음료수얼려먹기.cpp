/*
	음료수 얼려먹기 
	작성일: 2021.12.05
	작성자 : 성연재
	작성 언어 : C++
	
	문제
	N x M 크기의 얼음 틀이 있다. 구멍이 뚫려있는 부분은 0, 칸막이가 존재하는 부분은 1로 표시된다.
	구멍이 뚫려 있는 부분끼리 상, 하, 좌, 우로 붙어 있는 경우 서로 연결되어 있는 것으로 간주한다.
	이때 얼음 틀의 모양이 주어졌을 때 총 아이스크림의 개수를  구하는 프로그램을 작성하시오, 
	  
	 
	입력조건
	1. 첫째 줄에 얼음 틀의 세로길이 N과 가로길이 M이 주어진다.(1 <= N, M <= 1000)
	2. 두째 줄부터 N + 1번 줄까지 얼틈틀의 형태가 주어진다. 

	출력 조건 
	1. 한 번에 만들 수 있는 아이스크림의 개수를 출력한다. 
	
	
	입력예시
	4 5
	00110
	00011
	11111
	00000
	
	
	출력예시
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
