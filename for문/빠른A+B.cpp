/*
	빠른 A + B 
	작성일: 2022.01.02
	작성자 : 성연재
	작성 언어 : C++
	
	문제
	C++을 사용하고 있고 cin/cout을 사용하고자 한다면, cin.tie(NULL)과 sync_with_stdio(false)를 둘 다 적용해 주고, 
	endl 대신 개행문자(\n)를 쓰자. 
	단, 이렇게 하면 더 이상 scanf/printf/puts/getchar/putchar 등 C의 입출력 방식을 사용하면 안 된다.
	 
	  
	 
	입력조건 
	첫 줄에 테스트케이스의 개수 T가 주어진다. T는 최대 1,000,000이다. 
	다음 T줄에는 각각 두 정수 A와 B가 주어진다. A와 B는 1 이상, 1,000 이하이다.
	
	출력 조건 
	각 테스트케이스마다 A+B를 한 줄에 하나씩 순서대로 출력한다.
	
	입력예시
	5
	1 1
	12 34
	5 500
	40 60
	1000 1000
	
	출력예시
	2
	46
	505
	100
	2000
*/

#include <bits/stdc++.h>

using namespace std;

int T;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	cin >> T;
	for(int i = 0; i < T; i++)
	{
		int x, y;
		cin >> x >> y;
		cout << x + y << "\n";
	}
	
	return 0;
}

