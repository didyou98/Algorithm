/*
	���� A + B 
	�ۼ���: 2022.01.02
	�ۼ��� : ������
	�ۼ� ��� : C++
	
	����
	C++�� ����ϰ� �ְ� cin/cout�� ����ϰ��� �Ѵٸ�, cin.tie(NULL)�� sync_with_stdio(false)�� �� �� ������ �ְ�, 
	endl ��� ���๮��(\n)�� ����. 
	��, �̷��� �ϸ� �� �̻� scanf/printf/puts/getchar/putchar �� C�� ����� ����� ����ϸ� �� �ȴ�.
	 
	  
	 
	�Է����� 
	ù �ٿ� �׽�Ʈ���̽��� ���� T�� �־�����. T�� �ִ� 1,000,000�̴�. 
	���� T�ٿ��� ���� �� ���� A�� B�� �־�����. A�� B�� 1 �̻�, 1,000 �����̴�.
	
	��� ���� 
	�� �׽�Ʈ���̽����� A+B�� �� �ٿ� �ϳ��� ������� ����Ѵ�.
	
	�Է¿���
	5
	1 1
	12 34
	5 500
	40 60
	1000 1000
	
	��¿���
	2
	46
	505
	100
	2000
*/

#include <bits/stdc++.h>

using namespace std;

int T;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	cin >> T;
	for(int i = 0; i < T; i++)
	{
		int x, y;
		cin >> x >> y;
		cout << x + y << "\n";
	}
	
	return 0;
}

