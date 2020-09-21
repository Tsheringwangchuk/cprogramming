#include <stdio.h>
int explictfunc2()//it is for explict typecasting. it converts char and int into float
{
	float sum;
	int a;
	char A;//ASCII value of A is 65
	printf("enter the number as an integer:");
	scanf("%d",&a);
	sum = (float)a+(float)'A';
	printf("%.2f\n",sum);
	return 0;
}
int implictfunc1()//it is an implicit typecasting. 
{
	short a=77; //initializing variable of short data type
	int b; //declaring int variable
	b=a; //implicit type casting
	printf("%d\n",a);
	printf("%d\n",b);
	return 0;
} 
void main()
{
	implictfunc1();
	explictfunc2();
}