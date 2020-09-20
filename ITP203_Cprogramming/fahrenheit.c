//Convert of celsius to fahrenheit
#include <stdio.h>
int func1()
{
	float celsius,fahrenheit;
	printf("Enter the celsius:");
	scanf("%f",&celsius);
	fahrenheit=(celsius*9/5)+32;
	printf("%.2f celsius same as fahrenheit %.2f",celsius,fahrenheit);
	return 0;//return some value from a function
}
//it is the main funtion to call the other function
int main()
{
	func1();//function calling
}
