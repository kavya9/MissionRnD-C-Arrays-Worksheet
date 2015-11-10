/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position,
please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be
[10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	if (Arr == NULL || len < 0)return NULL;
	int i, j, flag1=-1, flag2=-1, temp;
	for (i = 0; i<len - 1; i++)
	{
		if (Arr[i]>Arr[i + 1])
		{
			flag1 = i;
			break;
		}
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (Arr[i] < Arr[flag1])
		{
			flag2 = i;
			break;
		}
	}
	if (flag1 != -1 && flag2 != -1)
	{
		temp = Arr[flag1];
		Arr[flag1] = Arr[flag2];
		Arr[flag2] = temp;
	}
}