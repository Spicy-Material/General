//Spicy-Material
#include <stdio.h>
int main()
{
	int arr[100];
	int i,n;
	int *ptr;
	ptr=arr;
	printf("Enter no. of elements in an array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	ptr=ptr+n-1;
	for(i=0;i<n;i++)
	{
		printf("%d\n",*ptr);
		ptr--;
	}
	return 0;
}
