/*
	A + B - 8
	작성일: 2022.01.06
	작성자 : 성연재
	작성 언어 : C++
	
	문제
	두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
	 
	입력조건 
	첫째 줄에 테스트 케이스의 개수 T가 주어진다.

	각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
	
	출력 조건 
	각 테스트 케이스마다 "Case #x: A + B = C" 형식으로 출력한다. x는 테스트 케이스 번호이고 1부터 시작하며,
	 C는 A+B이다.
	
	입력예시
	5
	1 1
	2 3
	3 4
	9 8
	5 2
	
	출력예시
	Case #1: 1 + 1 = 2
	Case #2: 2 + 3 = 5
	Case #3: 3 + 4 = 7
	Case #4: 9 + 8 = 17
	Case #5: 5 + 2 = 7
*/

#include <bits/stdc++.h>

using namespace std;

int T;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> T;
	for(int i = 1; i <= T; i++)
	{
		int x, y;
		cin >> x >> y;
		cout << "Case #" << i << ": " << x << " + " << y << " = "  << x + y <<"\n";
	}
}

