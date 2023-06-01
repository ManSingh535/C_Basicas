/*

	multiply all the digits of a number
*/



#include<stdio.h>
#include<conio.h>

int main()
{

	
	int num, digit_sum=0;

	printf("Enter a number\n");
	scanf("%d", &num);
	printf("The entered number is: %d", num);
	while(num>0)
	{

		digit_sum+=num%10;
		num=num/10;
	}
printf("Sum of the digits is: %d", digit_sum);

	getch();
	return 0;
}