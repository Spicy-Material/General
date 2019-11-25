#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char username[100], pass[100];
	printf("Enter Username\n");
	gets(username);
	printf("\nEnter Password\n");
	gets(pass);
		
	while(i<2)
	{
    if(strcmp(username,"Mohit")==0&&strcmp(pass,"qwerty123")==0)
		{	
			printf("You are logged in\n");
			break;
		}
    else
		{
      printf("\n\nWrong Credentials\n");
		  printf("Enter Username\n");
		  gets(username);
		  printf("\nEnter Password\n");
		  gets(pass);
      ++i;
    }
		

	}
	if(i==2)
	{
		printf("Account has been Locked\n");
	}
	return 0;
}
