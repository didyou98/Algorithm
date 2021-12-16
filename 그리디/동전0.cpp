/*
	동전 0 (백준 11047번) 
	작성자: 성연재
	작성일: 2021.12.16
	작성언어: C++
	
	문제
	준규가 가지고 있는 동전은 총 N종류이고, 각각의 동전을 매우 많이 가지고 있다.
	동전을 적절히 사용해서 그 가치의 합을 K로 만들려고 한다. 
	이때 필요한 동전 개수의 최솟값을 구하는 프로그램을 작성하시오.
	 
	입력조건
	첫째 줄에 N과 K가 주어진다. 
	(1 ≤ N ≤ 10, 1 ≤ K ≤ 100,000,000)
	둘째 줄부터 N개의 줄에 동전의 가치 Ai가 오름차순으로 주어진다. 
	(1 ≤ Ai ≤ 1,000,000, A1 = 1, i ≥ 2인 경우에 Ai는 Ai-1의 배수)
	
	출력 조건 
	첫째 줄에 K원을 만드는데 필요한 동전 개수의 최솟값을 출력한다.
	 
	입력예시
	10 4200
	1
	5
	10
	50
	100
	500
	1000
	5000
	10000
	50000
	 
	 
	출력예시
	6
	  
*/

#include <bits/stdc++.h>

using namespace std;

int n, k;
int g[11];
int cnt = 0;
int min_k_idx;

int greedy(int x)
{
	for(int i = min_k_idx; i >= 1; i--)
	{
		cnt += k / g[i];
		k = k % g[i];
	}
	return cnt;
}

int main(void)
{
	cin >> n >> k;
	for(int i = 1; i <= n; i++)
	{
		cin >> g[i];
	}
	for(int i = 1; i <= n; i++)
	{
		if(g[i] < k)
		{
			min_k_idx = i;
		}
	}
	cout << greedy(min_k_idx);
} 

