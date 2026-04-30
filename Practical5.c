#include<stdio.h>
int main()
{
	int num=11,i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",num++);
		}
		printf("\n\n");
	}
}
/*
Output:
11

12 13

14 15 16

17 18 19 20

21 22 23 24 25

*/
