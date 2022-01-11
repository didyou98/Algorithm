/*
	정수 N개의 합 
	작성일: 2022.01.10
	작성자 : 성연재
	작성 언어 : C++
	
	문제
	정수 n개가 주어졌을 때, n개의 합을 구하는 함수를 작성하시오.
	
	입력 조건
	a: 합을 구해야 하는 정수 n개가 저장되어 있는 배열 (0 ≤ a[i] ≤ 1,000,000, 1 ≤ n ≤ 3,000,000)
	n: 합을 구해야 하는 정수의 개수
	리턴값: a에 포함되어 있는 정수 n개의 합	
	
	출력 조건 
	
	
	입력예시

	
	출력예시

*/
#include <bits/stdc++.h>

using namespace std;


long long sum(vector<int> &a) {
	long long ans = 0;
    for(int i = 0; i < a.size(); i++)
	{
		ans += a[i];
	}
	return ans;
}

int main(void)
{
	vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << sum(v);
}


