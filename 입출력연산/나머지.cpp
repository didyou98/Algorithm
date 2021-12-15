/*
	나머지 (백준 10869번) 
	작성자: 성연재
	작성일: 2021.12.15
	작성언어: C++
	
	(A+B)%C는 ((A%C) + (B%C))%C 와 같을까?

	(A×B)%C는 ((A%C) × (B%C))%C 와 같을까?

	세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.
	
	입력조건
	첫째 줄에 A, B, C가 순서대로 주어진다. (2 ≤ A, B, C ≤ 10000)
	 
	출력 조건 
	첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C, 셋째 줄에 (A×B)%C, 넷째 줄에 ((A%C) × (B%C))%C를 출력한다.
	
	입력예시
	5 8 4
	
	출력예시
	1
	1
	0
	0
	  
*/

#include <bits/stdc++.h>

using namespace std;

int a, b, c;

int main(void)
{
	cin >> a >> b >> c;
	cout << (a + b) % c << endl;
	cout << ((a % c) + (b % c)) % c << endl;
	cout << (a*b)%c << endl;
	cout << ((a % c) * (b % c)) % c << endl;
}
