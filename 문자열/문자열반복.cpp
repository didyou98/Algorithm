/*
	���ڿ� �ݺ� 
	�ۼ���: 2022.01.14
	�ۼ��� : ������
	�ۼ� ��� : C++
	
	����
	���ڿ� S�� �Է¹��� �Ŀ�, �� ���ڸ� R�� �ݺ��� �� ���ڿ� P�� ���� �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
	��, ù ��° ���ڸ� R�� �ݺ��ϰ�, �� ��° ���ڸ� R�� �ݺ��ϴ� ������ P�� ����� �ȴ�. S���� QR Code "alphanumeric" ���ڸ� ����ִ�.
	QR Code "alphanumeric" ���ڴ� 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: �̴�.
	
	�Է� ����
	ù° �ٿ� �׽�Ʈ ���̽��� ���� T(1 �� T �� 1,000)�� �־�����. �� �׽�Ʈ ���̽��� �ݺ� Ƚ�� R(1 �� R �� 8), 
	���ڿ� S�� �������� ���еǾ� �־�����. S�� ���̴� ��� 1�̸�, 20���ڸ� ���� �ʴ´�.
	
	��� ���� 
	�� �׽�Ʈ ���̽��� ���� P�� ����Ѵ�.
	
	�Է¿���
	2
	3 ABC
	5 /HTP
	
	��¿���
	AAABBBCCC
	/////HHHHHTTTTTPPPPP

*/

#include <bits/stdc++.h>

using namespace std;

int t;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		int len; string s;
		cin >> len;
		cin >> s;
		for(int j = 0; j < s.size(); j++)
		{
			for(int k = 0; k < len; k++)
			{
				cout << s[j];
			}
		}
		cout << "\n";
	}
} 
