/*
	��Ģ���� (���� 10869��) 
	�ۼ���: ������
	�ۼ���: 2021.12.15
	�ۼ����: C++
	
	�� �ڿ��� A�� B�� �־�����. �̶�, A+B, A-B, A*B, A/B(��), A%B(������)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
	
	�Է�����
	�� �ڿ��� A�� B�� �־�����. (1 �� A, B �� 10,000)
	 
	��� ���� 
	ù° �ٿ� A+B, ��° �ٿ� A-B, ��° �ٿ� A*B, ��° �ٿ� A/B, �ټ�° �ٿ� A%B�� ����Ѵ�.
	
	�Է¿���
	7 3
	
	��¿���
	10
	4
	21
	2
	1
	  
*/

#include <bits/stdc++.h>

using namespace std;

int a, b;

int main(void)
{
	cin >> a >> b;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;	 
}
