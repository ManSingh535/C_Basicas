/*

	multiply all the digits of a number
	check formation of triangle is possible or not.
*/



#include<stdio.h>
#include<conio.h>

int main()
{

	
	int num, digit_sum=0, a,b,c,triangle=0;
	printf("Enter three sides of a triangle\n");
	scanf("%d %d %d", &a, &b, &c);
	printf("Enter a number\n");
	scanf("%d", &num);
	printf("The entered number is: %d\n", num);
	while(num>0)
	{

		digit_sum+=num%10;
		num=num/10;
	}
	
	if((a<(b+c))&&(b<(a+c))&&(c<(a+b)))
		triangle=1;
	if(triangle)
	printf("Triangle formation is possible\n");
	else printf("With given dimensions triangle formation is not possible\n");
	
printf("Sum of the digits is: %d\n", digit_sum);

	getch();
	return 0;
}