/*
	평균은 넘겠지 
	작성일: 2022.01.10
	작성자 : 성연재
	작성 언어 : C++
	
	문제
	대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다. 당신은 그들에게 슬픈 진실을 알려줘야 한다.
	
	입력 조건
	첫째 줄에는 테스트 케이스의 개수 C가 주어진다.

	둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고, 
	이어서 N명의 점수가 주어진다. 
	점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.
	
	출력 조건 
	각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다.
	
	입력예시
	5
	5 50 50 70 80 100
	7 100 95 90 80 70 60 50
	3 70 90 80
	3 70 90 81
	9 100 99 98 97 96 95 94 93 91
	
	출력예시
	40.000%
	57.143%
	33.333%
	66.667%
	55.556%	
*/

#include <bits/stdc++.h>

using namespace std;

int t;
double members[1001];
double avg, member;
int cnt;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		cin >> member;
		for(int j = 0; j < member; j++)
		{
			cin >> members[j];
			avg += members[j];
		}
		avg = avg / member;
		for(int j = 0; j < member; j++)
		{
			if(members[j] > avg)
			{
				cnt++;
			}
		}
		avg = (cnt / member) * 100;
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(3);
		cout << avg  << "%" << "\n";
		avg = 0;
		cnt = 0;
	}
}
