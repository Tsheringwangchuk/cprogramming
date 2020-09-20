#include <stdio.h>
int func1()
{
	//to find the alphabet of a particular ASCII value
	int no1 = 65;
	int no2 = 97;
	int no3 = 77;
	printf("The alphabet for this no1 ASCII value is:%c\n",(char)no1);// it can show the capital letter A.
	printf("The alphabet for this no2 ASCII value is:%c\n",(char)no2);// It can show the small letter a.
	printf("The alphabet for this no2 ASCII value is:%c\n",(char)no3);// It can show the small letter M.
	return 0;
}
int func2()
{
	//To find the size of datatype.
	printf("Size of char: %ld byte\n",sizeof(char));
	printf("Size of integer: %ld byte\n",sizeof(int));
	printf("Size of double: %ld byte\n",sizeof(double));
	printf("Size of float: %ld byte\n",sizeof(float));
	return 0;
}
int main()
{
	func1();
	func2();
}