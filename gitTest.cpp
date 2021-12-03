#include <bits/stdc++.h>

using namespace std;

priority_queue<pair<int, pair<int, int>>> pq;

int main(void)
{
	pq.push({-5, {0, 1}});
	pq.push({-8, {1, 0}});
	cout << pq.top().first;
	
}
