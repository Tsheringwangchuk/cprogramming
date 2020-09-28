//Using for Loop and ladder if-else condition in 1-D Array(s) in AND Gate 
#include <stdio.h>
void main()
{
	int A1[4] = {0,0,1,1};
	int A2[4] = {0,1,0,1};

	int output;

	for (int i = 0; i < 4; ++i)
	{
		if (A1[i] == 0 && A2[i] == 0)
			output = 0;
		else if (A1[i] == 0 && A2[i] == 1)
			output = 0;
		else if (A1[i] == 1 && A2[i] == 0)
			output = 0;
		else
			output = 1;
		printf("%d AND %d = %d \n",A1[i],A2[i],output);
	}
}