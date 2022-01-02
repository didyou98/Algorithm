/*
	N 찍기
	작성일: 2022.01.02
	작성자 : 성연재
	작성 언어 : C++
	
	문제
	자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
	 
	입력조건 
	첫째 줄에 100,000보다 작거나 같은 자연수 N이 주어진다.
	
	출력 조건 
	첫째 줄부터 N번째 줄 까지 차례대로 출력한다.
	
	입력예시
	5
	
	출력예시
	1
	2
	3
	4
	5
*/

#include <bits/stdc++.h>

using namespace std;

int n;

int main(void)
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cout << n - n + i;
	}
} 
