/*
	피보나치수열 with Top-Down
	작성자: 성연재
	작성일: 21.12.07
	작성언어: C++
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
	cout << fibo(10);
}
