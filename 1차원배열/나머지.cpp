/*
	나머지
	작성일: 2022.01.09
	작성자 : 성연재
	작성 언어 : C++
	
	문제
	두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다. 
	예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다. 
	수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 
	그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.
	
	입력 조건
	첫째 줄부터 열번째 줄 까지 숫자가 한 줄에 하나씩 주어진다. 
	이 숫자는 1,000보다 작거나 같고, 음이 아닌 정수이다. 
	
	출력 조건 
	첫째 줄에, 42로 나누었을 때, 서로 다른 나머지가 몇 개 있는지 출력한다.
	
	입력예시
	1
	2
	3
	4
	5
	6
	7
	8
	9
	10
	
	출력예시
	10
*/

#include <bits/stdc++.h>
#define SIZE 10

using namespace std;

vector<int> v;
int x[SIZE];
int cnt = 1;

int main(void)
{
	for(int i = 0; i < SIZE; i++)
	{
		cin >> x[i];
		v.push_back(x[i] % 42);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	cout << v.size();
} 
