/*
	단어의 개수
	작성일: 2022.01.14
	작성자 : 성연재
	작성 언어 : C++
	
	문제
	영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 
	단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.
	
	입력 조건
	첫 줄에 영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 이 문자열의 길이는 1,000,000을 넘지 않는다. 단어는 공백 한 개로 구분되며, 
	공백이 연속해서 나오는 경우는 없다. 또한 문자열은 공백으로 시작하거나 끝날 수 있다.
	
	출력 조건 
	첫째 줄에 단어의 개수를 출력한다.
	
	입력예시
	The Curious Case of Benjamin Button
	
	출력예시
	6

*/

#include <bits/stdc++.h>

using namespace std;

string str;
int cnt = 1; 

int main(void)
{
	getline(cin, str);
	for(int i = 0; i < str.size(); i++)
	{
		if(str[i] == ' ') cnt++;
	}
	
	if(str[0] == ' ') cnt--;
	if(str[str.size() - 1] == ' ') cnt--;
	
	cout << cnt;
} 
