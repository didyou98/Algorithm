/*
	OX퀴즈 
	작성일: 2022.01.10
	작성자 : 성연재
	작성 언어 : C++
	
	문제
	"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, 
	X는 문제를 틀린 것이다. 
	문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.

	"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.

	OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.
	
	입력 조건
	첫째 줄에 테스트 케이스의 개수가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고, 
	길이가 0보다 크고 80보다 작은 문자열이 주어진다. 문자열은 O와 X만으로 이루어져 있다.
	
	출력 조건 
	각 테스트 케이스마다 점수를 출력한다.
	
	입력예시
	5
	OOXXOXXOOO
	OOXXOOXXOO
	OXOXOXOXOXOXOX
	OOOOOOOOOO
	OOOOXOOOOXOOOOX
	
	출력예시
	10
	9
	7
	55
	30	
*/

#include <bits/stdc++.h>

using namespace std;

int t;
string s[1001];
int score = 1;
int result = 0;

int main(void)
{
	cin.tie(NULL);
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		cin >> s[i];
	}
	for(int i = 0; i < t; i++)
	{
		result = 0;
		score = 1;
		for(int j = 0; j < s[i].size(); j++)
		{
			if(s[i][j] == 'O')
			{
				result += score;
				if(s[i][j + 1] == 'O') score++;
				if(s[i][j + 1] == 'X') score = 1;
			}
		}
		cout << result <<"\n";
	}
} 
