/*
	���ĺ� ã�� 
	�ۼ���: 2022.01.14
	�ۼ��� : ������
	�ۼ� ��� : C++
	
	����
	���ĺ� �ҹ��ڷθ� �̷���� �ܾ� S�� �־�����. ������ ���ĺ��� ���ؼ�, 
	�ܾ ���ԵǾ� �ִ� ��쿡�� ó�� �����ϴ� ��ġ��, ���ԵǾ� ���� ���� ��쿡�� -1�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	
	�Է� ����
	ù° �ٿ� �ܾ� S�� �־�����. �ܾ��� ���̴� 100�� ���� ������, ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.
	
	��� ���� 
	������ ���ĺ��� ���ؼ�, a�� ó�� �����ϴ� ��ġ, b�� ó�� �����ϴ� ��ġ, 
	... z�� ó�� �����ϴ� ��ġ�� �������� �����ؼ� ����Ѵ�.
	����, � ���ĺ��� �ܾ ���ԵǾ� ���� �ʴٸ� -1�� ����Ѵ�. �ܾ��� ù ��° ���ڴ� 0��° ��ġ�̰�, �� ��° ���ڴ� 1��° ��ġ�̴�.
	
	�Է¿���
	baekjoon
	
	��¿���
	1 0 -1 -1 2 -1 -1 -1 -1 4 3 -1 -1 7 5 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1

*/

#include <bits/stdc++.h>

using namespace std;

string s;
char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int result[26];
int arrSize = sizeof(alpha) / sizeof(char);
bool isFirst[26];

int main(void)
{
	memset(result, -1, arrSize * sizeof(int));
	memset(isFirst, false, arrSize * sizeof(bool));
	cin >> s;
	for(int i = 0; i < arrSize; i++)
	{
		for(int j = 0; j < s.size(); j++)
		{
			if(s[j] == alpha[i] && !isFirst[i])
			{
				result[i] = j;
				isFirst[i] = true;
			}
			else
			{
				continue;
			}
		}
	}
	for(int i = 0; i < arrSize; i++) cout << result[i] << " ";
} 
