#include <stdio.h>
//two dimensional Array
void main()
{
	int array1[2][4] = {{1,2,3,4},
						{5,6,7,8}};
	for(int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("%d ",array1[i][j]);
			if(j==3)
			{
            printf("\n");
			}
		}
	}
}
