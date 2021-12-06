/*
	�Ǻ���ġ���� with Top-Down
	�ۼ���: ������
	�ۼ���: 21.12.07
	�ۼ����: C++
*/

#include <bits/stdc++.h>

long long d[100];

using namespace std;

long long fibo(int x)
{
	if(x == 1 || x == 2)
	{
		return 1;
	}
	if(d[x] != 0)
	{
		return d[x];
	}
	d[x] = fibo(x - 1) + fibo(x - 2);
	return d[x];
}

int main(void)
{
	fill(d, d + 100, 0);
	cout << fibo(50);
}
