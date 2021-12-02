/*
	미래 도시  
	작성일: 2021.12.02
	작성 언어: C++
	작성자: 성연재
	
	문제 
	방문 판매원 A는 많은 회사가 모여 있는 공중 미래 도시에 있다. 공중 미래 도시에는1번부터 N번까지의
	회사가 있는데 특정 회사끼르 서로 도로를 통해 연결되어 있다. 방문 판매원 A는 현재 1번 회사에 위치해 있으며,
	X번 회사에 방문해 물건을 판매하고자한다.
	
	공중 미래 도시에서 특정 회사에 도착하기 위한 방법은 회사끼리 연결되어 있는 도로를 이용하는 방법이 유일하다.
	또한 연결된 2개의 회사는 양방향으로 이동할 수 있다. 공중 미래 도시에서의 도로는 마하의 속도로 사람을 
	이동시켜주기 때문에 특정 회사와 다른 회사가 도로로 연결되어 있다면, 정확히 1만큼의 시간으로 이동할 수 있다.
	
	또한 오늘 판매원A는 기대하던 소개팅에도 참석하고자 한다. 소개팅의 상대는 K번 회사에 존재한다.
	방문 판매원 A는 X번 회사에 가서 물건을 판매하기 전에 먼저 소개팅 상대의 회사에 찾아가서 함께 커피를
	마실 예정이다. 따라서 방문 판매원 A는 1번 회사에서 출발하여 K번 회사를 방문한 뒤에 X번 회사로 가는 것이
	목표이다. 이 때 방문 판매원A는 가능한 한 빠르게 이동하고자 한다. 방문 판매원이 회사 사이를 이동하게 되는
	최소시간을 계산하는 프로그램을 작성하시오. 이 때 소개팅의 상대방과 커피를 마시는 시간 등은 고려하지 않는다
	예를 들어 N = 5, X = 4, K = 5이고 회사 간 도로가 7개면서 각 도로가 다음과 같이 연결되어 있을 때를 가정할
	수 있다.
	
	1-2, 1-3, 1-4, 2-4, 3-4, 3-5, 4-5
	
	이때 방문 판매원A가 최종적으로 4번 회사에 가는 경로를(1-3-5-4)로 설정하면 소개팅에도 참석할 수 있으면서
	총 3만큼의 시간으로 이동할 수 있다. 따라서 이 경우 최소 이동시간은 3이다. 
	 
	입력 조건 
	1. 첫째 줄에 전체 회사의 개수 N과 경로의 개수 M이 공백으로 구분되어 주어진다. (1 <= N, M <= 100)
	2. 둘째 줄부터 M + 1번 줄에는 연결된 두 회사의 번호가 공백으로 주어진다.
	3. M + 2번째 줄에는 X와 K가 공백으로 구분되어 차례대로 주어진다. (1 <= K <= 100) 
	
	출력 조건
	1. 첫째 줄에 방문 판매원 A가 K번 회사를 거쳐 X번 회사로 가는 최소 이동 시간을 출력한다.
	2. 만약 X번 회사에 도달할 수 없다면 -1을 출력한다.
	 
	입력 예시 
	5 7
	1 2
	1 3
	1 4
	2 4
	3 4
	3 5
	4 5
	4 5
	
	출력 예시
	3 
*/

#include <bits/stdc++.h>
#define INF 1e9
 
using namespace std;

// 회사의 개수 n, 도로 개수 m 
int n, m;

// 간선 정보 그래프 
int graph[501][501];

int main(void)
{
	// 회사의 개수와 도로 입력받기 
	cin >> n >> m;
	
	// 무한으로 초기화 
    for(int i = 0; i < 501; i++)
    {
    	fill(graph[i], graph[i] + 501, INF);
	}
	
	// 자기 자신 0으로 초기화 
	for(int a = 1; a <= n; a++)
	{
		for(int b = 1; b <= n; b++)
		{
			if(a == b) graph[a][b] = 0;
		}
	}
	
	// 연결된 도로의 비용을 1로 초기화 
	for(int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		graph[a][b] = 1;
		graph[b][a] = 1;
	}
	// k회사를 거처 x번 회사를 가기 위해 입력 
	int k, x;
	cin >> x >> k;
	
	// 플로이드워샬 수행 
	for(int k = 1; k <= n; k++)
	{
		for(int a = 1; a <= n; a++)
		{
			for(int b = 1; b <= n; b++)
			{
				graph[a][b] = min(graph[a][b], graph[a][k] + graph[k][b]);
			}	
		}	
	} 
	
	int result = graph[1][k] + graph[k][x];
	
	
	if(result >= INF)
	{
		cout << -1 << endl;	
	}
	else
	{
		cout << result << endl;
	}
}
