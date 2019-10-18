//Spicy-Material
#include <stdio.h>
void reverse_fun(int *p,int m);
void reverse_fun(int *p,int m)
{
	int i;
	p=p+m-1;
	for(i=0;i<m;i++)
	{
		printf("%d\n",*p);
		p--;
	}
}
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
	reverse_fun(ptr,n);
}
