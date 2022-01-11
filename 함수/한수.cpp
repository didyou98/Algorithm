/*
	한수 
	작성일: 2022.01.10
	작성자 : 성연재
	작성 언어 : C++
	
	문제
	어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다. 
	등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. N이 주어졌을 때, 
	1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. 
	
	입력 조건
	첫째 줄에 1,000보다 작거나 같은 자연수 N이 주어진다.
	
	출력 조건 
	첫째 줄에 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력한다.
	
	입력예시
	110
	
	출력예시
	99

*/

#include <bits/stdc++.h>

using namespace std;

int n;

int isSequence(int n)
{
	int cnt = 0;
	for(int i = 1; i <= n; i++)
	{
		if(i < 100) cnt++;
		else
		{
			string s = to_string(i);
			if((s[0] - '0') - (s[1] - '0') == ((s[1] - '0') - (s[2] - '0'))) cnt++;
		}
	}
	return cnt;
}

int main(void)
{
	cin >> n;
	cout << isSequence(n) << "\n";
} 
