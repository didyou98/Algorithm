/*
	�ܾ� ����
	�ۼ���: 2022.01.14
	�ۼ��� : ������
	�ۼ� ��� : C++
	
	����
	���ĺ� ��ҹ��ڷ� �� �ܾ �־�����, �� �ܾ�� ���� ���� ���� ���ĺ��� �������� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�. ��, �빮�ڿ� �ҹ��ڸ� �������� �ʴ´�.
	
	�Է� ����
	ù° �ٿ� ���ĺ� ��ҹ��ڷ� �̷���� �ܾ �־�����. �־����� �ܾ��� ���̴� 1,000,000�� ���� �ʴ´�.
	
	��� ���� 
	ù° �ٿ� �� �ܾ�� ���� ���� ���� ���ĺ��� �빮�ڷ� ����Ѵ�. ��, ���� ���� ���� ���ĺ��� ���� �� �����ϴ� ��쿡�� ?�� ����Ѵ�.
	
	�Է¿���
	Mississipi
	or
	zZa
	
	��¿���
	?
	or
	Z

*/

#include <bits/stdc++.h>

using namespace std;

int maxIndex;
int maxValue;
int isMax;
string s;
int arr[26] = {0, };
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main(void)
{
	cin >> s;
	maxValue = arr[0];
	
	for(int i = 0; i < s.size(); i++)
	{
		s[i] = toupper(s[i]);
	}
	
	for(int i = 0; i < 26; i++)
	{
		for(int j = 0; j < s.size(); j++)
		{
			if(alpha[i] == s[j])
			{
				arr[i] += 1;
				if(maxValue < arr[i])
				{
					maxValue = arr[i];
					maxIndex = i;
				}
			}
		}
	}
	
	for(int i = 0; i < 26; i++)
	{
		if(arr[i] == maxValue)
		{
			isMax++;
		}
	}
	
	if(isMax >= 2)
	{
		cout << "?";
	}
	else
	{
		cout << alpha[maxIndex];
	}
} 
