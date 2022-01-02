/*
	쉬운 계단 수(백준 10844번) 
	작성자: 성연재
	작성일: 2021.12.15
	작성언어: C++
	
	45656이란 수를 보자.
	이 수는 인접한 모든 자리의 차이가 1이다. 이런 수를 계단 수라고 한다.
	N이 주어질 때, 길이가 N인 계단 수가 총 몇 개 있는지 구해보자. 
	0으로 시작하는 수는 계단수가 아니다.
	
	입력조건
	첫째 줄에 N이 주어진다. N은 1보다 크거나 같고, 100보다 작거나 같은 자연수이다.
	 
	출력 조건 
	첫째 줄에 정답을 1,000,000,000으로 나눈 나머지를 출력한다.
	
	입력예시
	1 or 2 
	
	출력예시
	9 or 17
	  
*/

#include <bits/stdc++.h>

using namespace std;

int n;
int graph[10];
int d[101];

int main(void)
{
	cin >> n;
	fill(d, d + 101, 0);
	for(int i = 0; i <= 9; i++)
	{
		graph[i] = i;
		cout << graph[i] << " ";
	}
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= 9; j++)
		{
			d[i] = d[i - 1] + d[i] + 1;
		}
		cout << endl;
	}
}
