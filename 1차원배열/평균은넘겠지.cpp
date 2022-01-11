/*
	����� �Ѱ��� 
	�ۼ���: 2022.01.10
	�ۼ��� : ������
	�ۼ� ��� : C++
	
	����
	���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�. ����� �׵鿡�� ���� ������ �˷���� �Ѵ�.
	
	�Է� ����
	ù° �ٿ��� �׽�Ʈ ���̽��� ���� C�� �־�����.

	��° �ٺ��� �� �׽�Ʈ ���̽����� �л��� �� N(1 �� N �� 1000, N�� ����)�� ù ���� �־�����, 
	�̾ N���� ������ �־�����. 
	������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.
	
	��� ���� 
	�� ���̽����� �� �پ� ����� �Ѵ� �л����� ������ �ݿø��Ͽ� �Ҽ��� ��° �ڸ����� ����Ѵ�.
	
	�Է¿���
	5
	5 50 50 70 80 100
	7 100 95 90 80 70 60 50
	3 70 90 80
	3 70 90 81
	9 100 99 98 97 96 95 94 93 91
	
	��¿���
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
