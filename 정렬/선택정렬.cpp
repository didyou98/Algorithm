#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int minIdx = 0;
	int numsSize = 10;
	int nums[numsSize] = {7, 5, 9, 0, 3, 1, 6, 2, 4, 8};
	
	for(int i = 0; i < numsSize; i++)
	{
		minIdx = i;
		for(int j = i + 1; j < numsSize; j++)
		{
			if(nums[minIdx] > nums[j])
			{
				minIdx = j;
			}
		}
		swap(nums[i], nums[minIdx]);
	}
	
	for(int i = 0; i < numsSize; i++)
	{
		cout << nums[i] << " ";
	}
} 
