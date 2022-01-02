/*
	합 
	작성일: 2022.01.01
	작성자 : 성연재
	작성 언어 : C++
	
	문제
	n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
	 
	  
	 
	입력조건 
	첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.
	
	출력 조건 
	1부터 n까지 합을 출력한다.
	
	입력예시
	3
	
	출력예시
	6
*/

#include <bits/stdc++.h>

using namespace std;

int n;
int result;

int main(void)
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		result += i;
	}
	
	cout << result;
}
