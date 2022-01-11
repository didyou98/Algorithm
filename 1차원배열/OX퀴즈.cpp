/*
	OX���� 
	�ۼ���: 2022.01.10
	�ۼ��� : ������
	�ۼ� ��� : C++
	
	����
	"OOXXOXXOOO"�� ���� OX������ ����� �ִ�. O�� ������ ���� ���̰�, 
	X�� ������ Ʋ�� ���̴�. 
	������ ���� ��� �� ������ ������ �� �������� ���ӵ� O�� ������ �ȴ�. ���� ���, 10�� ������ ������ 3�� �ȴ�.

	"OOXXOXXOOO"�� ������ 1+2+0+0+1+0+0+1+2+3 = 10���̴�.

	OX������ ����� �־����� ��, ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	
	�Է� ����
	ù° �ٿ� �׽�Ʈ ���̽��� ������ �־�����. �� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, 
	���̰� 0���� ũ�� 80���� ���� ���ڿ��� �־�����. ���ڿ��� O�� X������ �̷���� �ִ�.
	
	��� ���� 
	�� �׽�Ʈ ���̽����� ������ ����Ѵ�.
	
	�Է¿���
	5
	OOXXOXXOOO
	OOXXOOXXOO
	OXOXOXOXOXOXOX
	OOOOOOOOOO
	OOOOXOOOOXOOOOX
	
	��¿���
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
