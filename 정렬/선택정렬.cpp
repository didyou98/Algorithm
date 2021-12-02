#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int minIdx = 0;
	int numsSize = 10;
	int nums[numsSize] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8};
	
	for(int i = 0; i < numsSize; i++)
	{
		minIdx = i; //0을 초기 인덱스로 설정
		for(int j = i + 1; j < numsSize; j++)
		{
			// i와 i + 1을 비교해서 i번째 요소가 더 크다면
			if(nums[minIdx] > nums[j])
			{
				// minIdx를 갱신
				minIdx = j;
			}
		}
		// swap을 통해 숫자를 서로 바꾼다
		swap(nums[i], nums[minIdx]);
	}
	// 
	for(int i = 0; i < numsSize; i++)
	{
		cout << nums[i] << " ";
	}
} 
