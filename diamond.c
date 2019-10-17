#include<stdio.h>
main()
{
	int i,j,rows,n,m,space,num=1;
	scanf("%d",&rows);
	n=rows;m=rows;
	for(i=rows;i>=1;i--)
	{	
		for(j=1;j<=i;j++)
		{
			printf("* ",num);
		}
		for(space=1;space<(m-rows)+2;space=space+1)
		{
			printf(" ");
			
		}
		m=m+4;
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=1;i<=rows;i++)
	{	
		for(j=1;j<=i;j++)
		{
			printf("* ",num);
		}
		for(space=(n*4)-2;space>1;space=space-1)
		{
			printf(" ");	
		}
		n--;
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
