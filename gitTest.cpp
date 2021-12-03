#include <bits/stdc++.h>

using namespace std;

int n; 

int main(void)
{
	int count = 0;
	cin >> n;
	n = 1000 - n;
	int coins[] = {500, 100, 50, 10, 5, 1};
	for(int coin : coins)
	{
		count += (n / coin);
		n %= coin;
	}
	cout << count;
}
