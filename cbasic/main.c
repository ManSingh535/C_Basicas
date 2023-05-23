/*
	multiply all the digits of a number
*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int num, digit_mul=1;
	printf("Enter a number\n");
	scanf("%d", &num);
	printf("The entered number is: %d", num);
	while(num>0)
	{
		digit_mul=digit_mul*(num%10);
		num=num/10;

	}
  printf("Multiplying digit result: %d", digit_mul);
	getch();
	return 0;
}