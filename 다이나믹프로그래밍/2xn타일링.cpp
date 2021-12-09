/*
	2xn 타일링 (백준 11726번) 
	작성자: 성연재
	작성일: 2021.12.09
	작성언어: C++
	
	2×n 크기의 직사각형을 1×2, 2×1 타일로 채우는 방법의 수를 구하는 프로그램을 작성하시오.
	
	입력조건
	첫째 줄에 n이 주어진다. (1 ≤ n ≤ 1,000)
	 
	출력 조건 
	첫째 줄에 2×n 크기의 직사각형을 채우는 방법의 수를 10,007로 나눈 나머지를 출력한다.
	
	입력예시
	9
	
	출력예시
	55
	  
*/

#include <bits/stdc++.h>

using namespace std;

int n;
int d[1001];

int dp(int n)
{
	if(n == 1) return 1;
	if(n == 2) return 2;
	if(d[n] != 0) return d[n];
	return d[n] = (dp(n - 1) + dp(n - 2)) % 10007;
}

int main(void)
{
	cin >> n;
	cout << dp(n);
} 
