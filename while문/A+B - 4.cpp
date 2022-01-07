/*
	A+B - 4
	작성일: 2022.01.07
	작성자 : 성연재
	작성 언어 : C++
	
	문제
	두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
	 
	입력조건 
	첫째 줄에 테스트 케이스의 개수 T가 주어진다.

	각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
	
	출력 조건 
	각 테스트 케이스마다 "Case #x: "를 출력한 다음, A+B를 출력한다. 테스트 케이스 번호는 1부터 시작한다.
	
	입력예시
	1 1
	2 3
	3 4
	9 8
	5 2
	
	출력예시
	2
	5
	7
	17
	7
*/

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	while(true)
	{
		
		int x, y;
		cin >> x >> y;
		if(cin.eof()) break;
		cout << x + y << "\n";
	}
}
