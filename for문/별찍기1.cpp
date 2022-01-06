/*
	별찍기 - 1 
	작성일: 2022.01.06
	작성자 : 성연재
	작성 언어 : C++
	
	문제
	첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
	 
	입력조건 
	첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
	
	출력 조건 
	첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
	
	입력예시
	5
	
	출력예시
	*
	**
	***
	****
	*****
*/

#include <bits/stdc++.h>

using namespace std;

int n;

int main(void)
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
} 
