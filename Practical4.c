#include<stdio.h>
int main()
{
	int n,i;
	printf("\n\tEnter array size: ");
	scanf("%d",&n);
	int arr[n];
	printf("\n\tEnter array's elements :\n");
	for(i=0;i<n;i++)
	{
		printf("\tarr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	int *ptr[n];
	printf("\n\tCube of all elements: ");
	for(i=0;i<n;i++)
	{
		ptr[i]=&arr[i];
		*ptr[i]=*ptr[i] * *ptr[i] * *ptr[i];
		printf("%d ,",*ptr[i]);
	}
}
/*
Output:

        Enter array size: 7

        Enter array's elements :
        arr[0] : 1
        arr[1] : 24
        arr[2] : 4
        arr[3] : 67
        arr[4] : 54
        arr[5] : 5
        arr[6] : 7

        Cube of all elements: 1 ,13824 ,64 ,300763 ,157464 ,125 ,343 ,
*/
