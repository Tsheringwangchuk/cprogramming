#include <stdio.h>
//One Dimensional Array
void main()
{
	int A1[4] = {1, 2, 3, 4};//initializing array
	for(int i = 0; i < 4; i++)
	{
		printf("\nArray%d = %d ",i+1,A1[i]);
	}
}