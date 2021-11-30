/* 
	다익스트라 알고리즘
	
	-그래프에서 여개의 노드가 있을 때, 특정 노드에서 출발하여 다른 노드로 가는 
	각각의 최단 경로를 구해주는 알고리즘
	 
	-음의 간선이 없을 때 정상적으로 작동
	
	1. 출발노드 설정
	2. 최단 거리 테이블 초기화
	3. 방문하지 않은 노드 중에서 최단거리가 가장 짧은 노드를 선택한다.
	4. 해당 노드를 거쳐 다른 노드로 가는 비용을 계산하여 최단 거리 테이블을 갱신
	5. 위 과정에서 3과 4를 반복한다. 
	
	입력 예시 :
	6 11
	1
	1 2 2
	1 3 5
	1 4 1
	2 3 3
	2 4 2
	3 2 3
	3 6 5
	4 3 3
	4 5 1
	5 3 1
	5 6 2 

	출력 예시:
	0
	2
	3
	1
	2
	4
*/

#include <bits/stdc++.h>
#define INF 1e9 // 무한을 의미하는 값으로 10억을 설정 

using namespace std;

int n, m, start; // 노드의 개수 n, 간선의 개수 m, 시작 노드 번호 start
vector<pair<int, int> > graph[100001]; // 각 노드에 대한 정보를 담을 배열
bool visited[100001]; // 방문한 적이 있는지 확인하는 배열
int d[100001]; // 최단 거리 테이블 만들기 


int getSmallestNode() { // 방문하지 않은 노드 중, 가장 거리가 짧은 번호를 반환 
	int min_value = INF;
	int index = 0; 
	for(int i = 1; i <= n; i++)
	{
		if(d[i] < min_value && !visited[i]) // 최소값이고 방문한 적이 없다면 
		{
			// 최소값과 인덱스 변수를 갱신 
			min_value = d[i];
			index = i;
		}	
	} 
	return index; 
} 

void dijkstra(int start)
{
	d[start] = 0;
	visited[start] = true;
	for(int j = 0; j < graph[start].size(); j++)
	{
		// 현재 노드와 연결된 노드를 가중치대로 초기화
		d[graph[start][j].first] = graph[start][j].second; 
	}
	
	// 시작 노드를 제외한 전체 n - 1개의 노드에 대해 반복
	for(int i = 0; i < n - 1; i++)
	{
		int now = getSmallestNode();
		visited[now] = true;	
		for (int j = 0; j < graph[now].size(); j++) {
			// 현재 노드의 값과 연결된 노드의 가중치의 합 
            int cost = d[now] + graph[now][j].second;
            // 현재 노드를 거쳐서 다른 노드로 이동하는 거리가 더 짧은 경우
            if (cost < d[graph[now][j].first]) {
                d[graph[now][j].first] = cost;
            }
        }
	} 
	
}

int main(void)
{
	cin >> n >> m >> start;
	for(int i = 0; i < m; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		graph[a].push_back({b, c});
	}
	
	fill_n(d, 100001, INF);
	
	dijkstra(start);
	
	for (int i = 1; i <= n; i++) {
        // 도달할 수 없는 경우, 무한(INFINITY)이라고 출력
        if (d[i] == INF) {
            cout << "INFINITY" << endl;
        }
        // 도달할 수 있는 경우 거리를 출력
        else {
            cout << d[i] << endl;
        }
    }
} 
