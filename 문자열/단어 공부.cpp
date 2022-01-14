/*
	단어 공부
	작성일: 2022.01.14
	작성자 : 성연재
	작성 언어 : C++
	
	문제
	알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.
	
	입력 조건
	첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.
	
	출력 조건 
	첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.
	
	입력예시
	Mississipi
	or
	zZa
	
	출력예시
	?
	or
	Z

*/

#include <bits/stdc++.h>

using namespace std;

int maxIndex;
int maxValue;
int isMax;
string s;
int arr[26] = {0, };
char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

int main(void)
{
	cin >> s;
	maxValue = arr[0];
	
	for(int i = 0; i < s.size(); i++)
	{
		s[i] = toupper(s[i]);
	}
	
	for(int i = 0; i < 26; i++)
	{
		for(int j = 0; j < s.size(); j++)
		{
			if(alpha[i] == s[j])
			{
				arr[i] += 1;
				if(maxValue < arr[i])
				{
					maxValue = arr[i];
					maxIndex = i;
				}
			}
		}
	}
	
	for(int i = 0; i < 26; i++)
	{
		if(arr[i] == maxValue)
		{
			isMax++;
		}
	}
	
	if(isMax >= 2)
	{
		cout << "?";
	}
	else
	{
		cout << alpha[maxIndex];
	}
} 
