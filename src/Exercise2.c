/*
2.	Write a program to receive integers, the program ends when user input 0. 
Print the minimum (different from 0) and maximum number (different from 0) among the received numbers.
Ex:
 ____________________________________
| Input: -3 5 -2 9 8 10 5 -1 0       |
| Output: Max: 10                    |
|         Min: -3                    |
|____________________________________|
*/

#include <stdio.h>
int main
	{ 
		int a=[10]; 
	for(int i = 0; i < 5; i++)

	}
		printf("input [%d] =", i);
		scanf("%d", &a[i]);
		printf("cac phan tu can tim min max: ");
		for(int i = 0; i < 5; i++)
		printf("%4d", a[1]);
		int max = a[0];
	int min = a[0];
	for (int j = 0; j < 5; ++j)
	{
		if (max > a[i])
		max = a[i];
		else if (min < a[i])
		min = a[i];
	}
	printf("\nMax : %d", max);
	printf("\nMin : %d", min);

	return 0;
}
