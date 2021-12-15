/*
	A-B (백준 1001번) 
	작성자: 성연재
	작성일: 2021.12.15
	작성언어: C++
	
	두 정수 A와 B를 입력받은 다음, A-B를 출력하는 프로그램을 작성하시오.
	
	입력조건
	첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)
	 
	출력 조건 
	첫째 줄에 A-B를 출력한다.
	
	입력예시
	3 2
	
	출력예시
	1
	  
*/

#include <bits/stdc++.h>

using namespace std;

int a, b;

int main(void)
{
	cin >> a >> b;
	cout << a - b;
}
