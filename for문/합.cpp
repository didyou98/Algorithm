/*
	�� 
	�ۼ���: 2022.01.01
	�ۼ��� : ������
	�ۼ� ��� : C++
	
	����
	n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	 
	  
	 
	�Է����� 
	ù° �ٿ� n (1 �� n �� 10,000)�� �־�����.
	
	��� ���� 
	1���� n���� ���� ����Ѵ�.
	
	�Է¿���
	3
	
	��¿���
	6
*/

#include <bits/stdc++.h>

using namespace std;

int n;
int result;

int main(void)
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		result += i;
	}
	
	cout << result;
}
