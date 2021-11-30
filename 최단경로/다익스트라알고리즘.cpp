/* 
	���ͽ�Ʈ�� �˰���
	
	-�׷������� ������ ��尡 ���� ��, Ư�� ��忡�� ����Ͽ� �ٸ� ���� ���� 
	������ �ִ� ��θ� �����ִ� �˰���
	 
	-���� ������ ���� �� ���������� �۵�
	
	1. ��߳�� ����
	2. �ִ� �Ÿ� ���̺� �ʱ�ȭ
	3. �湮���� ���� ��� �߿��� �ִܰŸ��� ���� ª�� ��带 �����Ѵ�.
	4. �ش� ��带 ���� �ٸ� ���� ���� ����� ����Ͽ� �ִ� �Ÿ� ���̺��� ����
	5. �� �������� 3�� 4�� �ݺ��Ѵ�. 
	
	�Է� ���� :
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

	��� ����:
	0
	2
	3
	1
	2
	4
*/

#include <bits/stdc++.h>
#define INF 1e9 // ������ �ǹ��ϴ� ������ 10���� ���� 

using namespace std;

int n, m, start; // ����� ���� n, ������ ���� m, ���� ��� ��ȣ start
vector<pair<int, int> > graph[100001]; // �� ��忡 ���� ������ ���� �迭
bool visited[100001]; // �湮�� ���� �ִ��� Ȯ���ϴ� �迭
int d[100001]; // �ִ� �Ÿ� ���̺� ����� 


int getSmallestNode() { // �湮���� ���� ��� ��, ���� �Ÿ��� ª�� ��ȣ�� ��ȯ 
	int min_value = INF;
	int index = 0; 
	for(int i = 1; i <= n; i++)
	{
		if(d[i] < min_value && !visited[i]) // �ּҰ��̰� �湮�� ���� ���ٸ� 
		{
			// �ּҰ��� �ε��� ������ ���� 
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
		// ���� ���� ����� ��带 ����ġ��� �ʱ�ȭ
		d[graph[start][j].first] = graph[start][j].second; 
	}
	
	// ���� ��带 ������ ��ü n - 1���� ��忡 ���� �ݺ�
	for(int i = 0; i < n - 1; i++)
	{
		int now = getSmallestNode();
		visited[now] = true;	
		for (int j = 0; j < graph[now].size(); j++) {
			// ���� ����� ���� ����� ����� ����ġ�� �� 
            int cost = d[now] + graph[now][j].second;
            // ���� ��带 ���ļ� �ٸ� ���� �̵��ϴ� �Ÿ��� �� ª�� ���
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
        // ������ �� ���� ���, ����(INFINITY)�̶�� ���
        if (d[i] == INF) {
            cout << "INFINITY" << endl;
        }
        // ������ �� �ִ� ��� �Ÿ��� ���
        else {
            cout << d[i] << endl;
        }
    }
} 
