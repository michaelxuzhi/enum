#include <stdio.h>
enum something
{
	aa,bb,cc,dd,ee,ff,gg
};

void main()
{
	enum something x[2][3]; 
	int i,j;
	x[0][0]=dd;
	x[0][1]=ee;
	x[0][2]=ff;
	x[1][0]=aa;
	x[1][1]=bb;
	x[1][2]=cc;
	for (j=0;j<2;j++)
	{
		for (i=0;i<3;i++)
		{
			printf("%d ",x[j][i]);
		}
		printf("\n");
	}
}