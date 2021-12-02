/*
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


int n, m, start; // ����� ����(N), ������ ����(M), ���� ��� ��ȣ(Start)
vector<pair<int, int>> graph[100001]; // �� ��忡 ����Ǿ� �ִ� ��忡 ���� ������ ��� �迭
int d[100001]; // �ִ� �Ÿ� ���̺� �����

void dijkstra(int start) {
    priority_queue<pair<int, int>> pq;
    // ���� ���� ���� ���� �ִ� ��δ� 0���� �����Ͽ�, ť�� ����
    pq.push({0, start});
    d[start] = 0;
    while (!pq.empty()) { // ť�� ������� �ʴٸ�
        // ���� �ִ� �Ÿ��� ª�� ��忡 ���� ���� ������
        int dist = -pq.top().first; // ���� �������� ��� 
        int now = pq.top().second; // ���� ���
        pq.pop();
        // ���� ��尡 �̹� ó���� ���� �ִ� ����� ����
        if (d[now] < dist) continue;
        // ���� ���� ����� �ٸ� ������ ������ Ȯ��
        for (int i = 0; i < graph[now].size(); i++) {
            int cost = dist + graph[now][i].second;
            // ���� ��带 ���ļ�, �ٸ� ���� �̵��ϴ� �Ÿ��� �� ª�� ���
            if (cost < d[graph[now][i].first]) {
                d[graph[now][i].first] = cost;
                pq.push(make_pair(-cost, graph[now][i].first));
            }
        }
    }
}

int main(void) {
    cin >> n >> m >> start;

    // ��� ���� ������ �Է¹ޱ�
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        // a�� ��忡�� b�� ���� ���� ����� c��� �ǹ�
        graph[a].push_back({b, c});
    }

    // �ִ� �Ÿ� ���̺��� ��� �������� �ʱ�ȭ
    fill(d, d + 100001, INF);
    
    // ���ͽ�Ʈ�� �˰����� ����
    dijkstra(start);

    // ��� ���� ���� ���� �ִ� �Ÿ��� ���
    for (int i = 1; i <= n; i++) {
        // ������ �� ���� ���, ����(INFINITY)�̶�� ���
        if (d[i] == INF) {
            cout << "INFINITY" << '\n';
        }
        // ������ �� �ִ� ��� �Ÿ��� ���
        else {
            cout << i <<"��° ��� :" << d[i] << '\n';
        }
    }
}
