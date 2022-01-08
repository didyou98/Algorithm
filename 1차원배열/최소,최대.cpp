/*
	최소, 최대 
	작성일: 2022.01.08
	작성자 : 성연재
	작성 언어 : C++
	
	문제
	N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
	 
	입력조건 
	첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 
	모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.
	
	출력 조건 
	첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.
	
	입력예시
	5
	20 10 35 30 7
	
	출력예시
	7 35
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int N;
	cin >> N;
	int arr[N];
	for(int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + N);
	cout << arr[0] << " " << arr[N - 1] << endl;
	return 0;
}
