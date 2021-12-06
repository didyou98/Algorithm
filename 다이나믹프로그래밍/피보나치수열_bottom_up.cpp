/*
	피보나치수열 with Bottom-Up
	작성자: 성연재
	작성일: 21.12.07
	작성언어: C++
*/

#include <bits/stdc++.h>

using namespace std;

long long d[100];

int main(void)
{
	d[1] = 1;
	d[2] = 1;
	int n = 50;
	
	for(int i = 3; i <= n; i++)
	{
		d[i] = d[i - 1] + d[i - 2];
	}
	
	cout << d[n] << endl;
}
