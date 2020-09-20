/*Conversion of fahrenheit to celsius*/
# include <stdio.h>
void main()
{
	float fahrenheit ,celsius;
	printf("enter the fahrenheit:");
	scanf("%f", &fahrenheit);
	celsius=(5/9)*(fahrenheit-32);
	printf("%.2f same as %.2f",fahrenheit,celsius);//.2 shows roundoff to two decimal place
}