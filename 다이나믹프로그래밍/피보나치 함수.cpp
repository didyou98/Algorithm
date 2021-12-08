/*
	�Ǻ���ġ �Լ� 
	�ۼ���: ������
	�ۼ���: 2021.12.07
	�ۼ����: C++
	
	����
	���� �ҽ��� N��° �Ǻ���ġ ���� ���ϴ� C++ �Լ��̴�.

	int fibonacci(int n) {
	    if (n == 0) {
	        printf("0");
	        return 0;
	    } else if (n == 1) {
	        printf("1");
	        return 1;
	    } else {
	        return fibonacci(n?1) + fibonacci(n?2);
	    }
	}
	fibonacci(3)�� ȣ���ϸ� ������ ���� ���� �Ͼ��.

	fibonacci(3)�� fibonacci(2)�� fibonacci(1) (ù ��° ȣ��)�� ȣ���Ѵ�.
	fibonacci(2)�� fibonacci(1) (�� ��° ȣ��)�� fibonacci(0)�� ȣ���Ѵ�.
	�� ��° ȣ���� fibonacci(1)�� 1�� ����ϰ� 1�� �����Ѵ�.
	fibonacci(0)�� 0�� ����ϰ�, 0�� �����Ѵ�.
	fibonacci(2)�� fibonacci(1)�� fibonacci(0)�� ����� ���, 1�� �����Ѵ�.
	ù��° ȣ���� fibonacci(1)�� 1�� ����ϰ�, 1�� �����Ѵ�.
	fibonacci(3)�� fibonacci(2)�� fibonacci(1)�� ����� ���, 2�� �����Ѵ�.
	1�� 2�� ��µǰ�, 0�� 1�� ��µȴ�. N�� �־����� ��,
	fibonacci(N)�� ȣ������ ��, 0�� 1�� ���� �� �� ��µǴ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	 
	 
	 �Է�����
	 
	 ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����.

	 �� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, N�� �־�����. N�� 40���� �۰ų� ���� �ڿ��� �Ǵ� 0�̴�.
	 
	 ��� ���� 
	 �� �׽�Ʈ ���̽����� 0�� ��µǴ� Ƚ���� 1�� ��µǴ� Ƚ���� �������� �����ؼ� ����Ѵ�.
	 
	�Է¿���
 	3
	0
	1
	3
	 
	��¿���
	1 0
	0 1
	1 2
	  
*/

#include <bits/stdc++.h>

using namespace std;
vector<pair<int, int>> v;
int testCase;
int d[40] = {0, 1};

int fibo(int x) {
	if(x == 0 || x == 1) return x;
	else if(d[x] == 0) d[x] = fibo(x - 1) + fibo(x - 2);
	return d[x];
}

int main(void)
{
	cin >> testCase;
	int n;
	for(int i = 0; i < testCase; i++)
	{
		cin >> n;
		if(n == 0) cout << "1 0" << endl;
		else cout << fibo(n - 1) << " " << fibo(n) << endl;
	}
}
