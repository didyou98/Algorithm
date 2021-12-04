/*
	상하좌우 
	작성일: 2021.12.03
	작성자 : 성연재
	작성 언어 : C++
	
	문제
	여행가 A는 N x N크기의 정사각형 공간 위에 서 있다. 이 공간은 1 x 1크기의 정사각형으로 나누어져 있다.
	가장 왼쪽 위 좌표는 (1, 1)이며, 가장 오른쪽 아래 좌표는 (N, N)에 해당한다. 여행가 A는 상, 하, 좌, 우
	방향으로 이동할 수 있으며, 시작 좌표는 항상 (1, 1)이다. 우리 앞에는 여행가 A가 이동할 계획서가 놓여있다.
	계획서에는 L, R, U, D중 하나의 문자가 반복적으로 적혀있다. 각 문자의 의미는 다음과 같다
	L: left, R: right, U: up, D: down
	이때 여항가 A가 N x N 크기의 정사각형 공간을 벗어나는 움직임은 무시된다. 예를 들어 (1, 1)의 위치에서
	L 혹은 U를 만나게 되면 무시된다.
	계획서가 주어졌을 때 여행가 A가 도착하는 좌표를 프로그램으로 만들어라.
	 
	입력조건
	1. 첫째 줄에 공간의 크기를 나타내는 N이 주어진다. (1 <= N <= 100)
	2. 둘째 줄에 여행가 A가 이동할 계획서 내용이 주어진다 (1 <= 이동횟수 <= 100)
	 
	 
	출력 조건 
	1. 첫째 줄에 여행가 A가 최종적으로 도착할 지점의 좌표 (X, Y)를 출력 
	
	
	입력예시
	5
	R R R U D D 
	
	출력예시
	3 4
*/

#include <bits/stdc++.h>

using namespace std;

int n;
string plans;
int x = 0;
int y = 0;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

char types[] = {'L', 'R', 'U', 'D'};

int main(void)
{
	cin >> n;
	cin.ignore();
	getline(cin, plans);
	for(int i = 0; i < plans.size(); i+=2)
	{
		char plan = plans[i];
		int nx = 0, ny = 0;
		for(int j = 0; j < 4; j++)
		{
			if(plan == types[j])
			{
				nx = x + dx[j];
				ny = y + dy[j];
			}
		}
		if(nx < 0 || ny < 0 || nx > n || ny > n) continue;
		x = nx;
		y = ny;
	}
	
	cout << x + 1 << "," << y + 1;
} 

