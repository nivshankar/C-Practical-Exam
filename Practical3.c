#include<stdio.h>
void ReverseOfElements(int n,int a[n])
{
	int i,rev[n];
	printf("\n\tThe reverse of elemnets are: ");
	for(i=0;i<n;i++)
	{
		rev[i]=0;
		while(a[i]!=0)
		{
			rev[i]=rev[i]*10+a[i]%10;
			a[i]/=10;
		}
		printf("%d ,",rev[i]);
	}
	
}
int main()
{
	int n,i,sum=0;
	printf("\n\tEnter array size: ");
	scanf("%d",&n);
	int arr[n];
	printf("\n\tEnter array's elements :\n");
	for(i=0;i<n;i++)
	{
		printf("\tarr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	sum=sum+arr[i];
	}
	printf("\n\tSum of elements of the array is : %d",sum);
	ReverseOfElements(n,arr);
}
/*
Output:

        Enter array size: 7

        Enter array's elements :
        arr[0] : 5
        arr[1] : 56
        arr[2] : 55
        arr[3] : 44
        arr[4] : 7
        arr[5] : 45
        arr[6] : 68

        Sum of elements of the array is : 280
        The reverse of elemnets are: 5 ,65 ,55 ,44 ,7 ,54 ,86 ,
*/
