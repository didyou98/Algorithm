/*
	사칙연산 (백준 10869번) 
	작성자: 성연재
	작성일: 2021.12.15
	작성언어: C++
	
	두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오. 
	
	입력조건
	두 자연수 A와 B가 주어진다. (1 ≤ A, B ≤ 10,000)
	 
	출력 조건 
	첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다.
	
	입력예시
	7 3
	
	출력예시
	10
	4
	21
	2
	1
	  
*/

#include <bits/stdc++.h>

using namespace std;

int a, b;

int main(void)
{
	cin >> a >> b;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;	 
}
