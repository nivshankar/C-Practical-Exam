#include<stdio.h>
int main()
{
	int choice;
	float num1,num2;
	printf("\n\tEnter first number: ");
	scanf("%f",&num1);
	printf("\n\tEnter second number: ");
	scanf("%f",&num2);
	printf("\n\tThe available operation with the 2 numbers ");
	printf("\n\t1)addition\n\t2)subtraction\n\t3)multiplication\n\t4)division");
	printf("\n\n\tEnter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n\t%.1f + %.1f = %.1f",num1,num2,(num1+num2));
			break;
		case 2:
			printf("\n\t%.1f - %.1f = %.1f",num1,num2,(num1-num2));
			break;
		case 3:
			printf("\n\t%.2f * %.2f = %.2f",num1,num2,(num1*num2));
			break;
		case 4:
			printf("\n\t%.2f / %.2f = %.2f",num1,num2,(num1/num2));
			break;
		default:
			printf("\n\tInvalid choice.");
	}
	
}
/*
Output :
Case 1)

        Enter first number: 19

        Enter second number: 35

        The available operation with the 2 numbers
        1)addition
        2)subtraction
        3)multiplication
        4)division

        Enter your choice: 1

        19.0 + 35.0 = 54.0
Case 2)

        Enter first number: 37

        Enter second number: 56

        The available operation with the 2 numbers
        1)addition
        2)subtraction
        3)multiplication
        4)division

        Enter your choice: 2

        37.0 - 56.0 = -19.0
Case 3)

        Enter first number: 20

        Enter second number: 19

        The available operation with the 2 numbers
        1)addition
        2)subtraction
        3)multiplication
        4)division

        Enter your choice: 3

        20.00 * 19.00 = 380.00
Case 4)

        Enter first number: 38

        Enter second number: 5

        The available operation with the 2 numbers
        1)addition
        2)subtraction
        3)multiplication
        4)division

        Enter your choice: 4

        38.00 / 5.00 = 7.60
case 5)

        Enter first number: 549

        Enter second number: 6

        The available operation with the 2 numbers
        1)addition
        2)subtraction
        3)multiplication
        4)division

        Enter your choice: 78

        Invalid choice.
*/
