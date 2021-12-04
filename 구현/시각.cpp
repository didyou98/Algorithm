/*
	시각 
	작성일: 2021.12.04
	작성자 : 성연재
	작성 언어 : C++
	
	문제
	정수 N이 입력되면 00시 00분 00초부터 N시 59분 59초까지의 모든 시각 중에서 3이 하나라도 포함되는
	모든 경우의 수를 구하는 프로그램을 작성하시오. 예를 들어 1을 입력했을 때 다음은 3이 하나라도
	포함되어 있으므로 세어야 하는 시각이다
	- 00시 00분 03초
	- 00시 13분 30초
	  
	 
	입력조건
	1. 첫째 줄에 정수 N이 입력된다. (0 <= N <= 23) 
	 	 
	출력 조건 
	1. 00시 00분 00초부터 N시 59분 59초까지의 모든 시작 중에서 3이 하나라도 포함되는 모든 경우의 수 출력 
	
	
	입력예시
	5
	
	출력예시
	11475
*/

#include <bits/stdc++.h>

using namespace std;

int n;



int main(void)
{
	int count = 0;
	cin >> n;
	for(int hour = 0; hour <= n; hour++)
	{
		for(int minute = 0; minute < 60; minute++)
		{
			for(int second = 0; second < 60; second++)
			{
				if(hour % 10 == 3 || minute % 10 == 3 || minute / 10 == 3 || second % 10 == 3 || second / 10 == 3)
				{
					count+=1;
				}
			}
		}
	}
	
	cout << count << endl;
} 
