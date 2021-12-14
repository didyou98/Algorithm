/*
	가장 긴 바이토닉 부분 수열 (백준 11054번) 
	작성자: 성연재
	작성일: 2021.12.14
	작성언어: C++
	
	수열 S가 어떤 수 Sk를 기준으로 S1 < S2 < ... Sk-1 < Sk > Sk+1 > ... SN-1 > SN을 만족한다면, 
	그 수열을 바이토닉 수열이라고 한다.

	예를 들어, {10, 20, 30, 25, 20}과 {10, 20, 30, 40}, {50, 40, 25, 10} 은 바이토닉 수열이지만,  
	{1, 2, 3, 2, 1, 2, 3, 2, 1}과 {10, 20, 30, 40, 20, 30} 은 바이토닉 수열이 아니다.

	수열 A가 주어졌을 때, 그 수열의 부분 수열 중 바이토닉 수열이면서 가장 긴 수열의 길이를 
	구하는 프로그램을 작성하시오.
	
	입력조건
	첫째 줄에 수열 A의 크기 N이 주어지고, 
	둘째 줄에는 수열 A를 이루고 있는 Ai가 주어진다. (1 ≤ N ≤ 1,000, 1 ≤ Ai ≤ 1,000)
	
	출력 조건 
	첫째 줄에 수열 A의 부분 수열 중에서 가장 긴 바이토닉 수열의 길이를 출력한다.
	
	입력예시
	10
	1 5 2 1 4 3 4 5 2 1
	
	출력예시
	7
	  
*/

#include <bits/stdc++.h>

using namespace std;

int n;
int graph[1001];
int d1[1001];
int d2[1001];
int cnt;
int main(void)
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> graph[i];
	}
	fill(d1, d1 + n, 1);
	fill(d2, d2 + n, 1);
	graph[0] = d1[0] = 0;
	graph[n + 1] = d2[n + 1] = 0;
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j <= i - 1; j++)
		{
			if(graph[i] > graph[j])
			{
				d1[i] = max(d1[i], d1[j] + 1);
			}
		}
	}
	for(int i = n; i >= 0; i--)
	{
		for(int j = n + 1; j >= i; j--)
		{
			if(graph[i] > graph[j])
			{
				d2[i] = max(d2[i], d2[j] + 1);
			}
		}
	}
	int cnt = 0;
	for(int i = 1; i <= n; i++)
	{
		cnt = max(cnt, d1[i] + d2[i] - 1);
	}
	cout << cnt;
} 
