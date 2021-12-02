#include <bits/stdc++.h>

using namespace std;

priority_queue<pair<int, pair<int, int>>> pq;
int main(void)
{
	pq.push({1, {0, 1}});
	cout << pq.top().first;
	cout << pq.top().second.first;
	
}
