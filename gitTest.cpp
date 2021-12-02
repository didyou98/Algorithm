#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> graph[100001];

int main(void)
{
	graph[1].push_back({2, 4});

	cout << graph[1].size() << endl;
	
}
