#include <stdio.h>
//Using for Loop in 1-D Array(s) in AND Gate
void main()
{
	int A1[4] = {0,0,1,1};//initializing the array
	int A2[4] = {0,1,0,1};//initializing the array
	int output;
	for (int i = 0; i < 4; ++i)
	{
		output = A1[i] && A2[i];

		printf("%d AND %d = %d \n",A1[i],A2[i],output);
	}
}