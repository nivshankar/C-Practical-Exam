#include<stdio.h>
int SumOfArray(int n,int a[n])
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
	sum=sum+a[i];
	}
	return sum;
}
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
	int answer=SumOfArray(n,arr);
	printf("\n\tSum of elements of the array is : %d",answer);
}
/*
Output:

        Enter array size: 5

        Enter array's elements :
        arr[0] : 3
        arr[1] : 5
        arr[2] : 7
        arr[3] : 4
        arr[4] : 7

        Sum of elements of the array is : 26
*/
