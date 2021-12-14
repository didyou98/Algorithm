/*
	가장 긴 증가하는 부분 수열 (백준 11053번) 
	작성자: 성연재
	작성일: 2021.12.14
	작성언어: C++
	
	수열 A가 주어졌을 때, 가장 긴 증가하는 부분 수열을 구하는 프로그램을 작성하시오.
	예를 들어, 수열 A = {10, 20, 10, 30, 20, 50} 인 경우에 가장 긴 증가하는 부분 수열은 
	A = {'10', '20', 10, '30', 20, '50'} 이고, 길이는 4이다.
	
	입력조건
	1. 첫째 줄에 수열 A의 크기 N (1 ≤ N ≤ 1,000)이 주어진다.
	2. 둘째 줄에는 수열 A를 이루고 있는 Ai가 주어진다. (1 ≤ Ai ≤ 1,000)
	
	출력 조건 
	첫째 줄에 수열 A의 가장 긴 증가하는 부분 수열의 길이를 출력한다.
	
	입력예시
	6
	10 20 10 30 20 50
	
	출력예시
	4
	  
*/

#include <bits/stdc++.h>

using namespace std;

int n;
int graph[1001];
int d[1001];
int cnt;

int main(void)
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> graph[i];
	}
	fill(d, d + n, 1);
	graph[0] = d[0] = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j <= i - 1; j++)
		{
			if(graph[i] > graph[j])
			{
				d[i] = max(d[i], d[j] + 1);
			}
		}
		cnt = max(cnt, d[i]);
	}
	cout << cnt;
} 
