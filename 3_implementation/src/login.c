#include<stdio.h>
#include"header.h"
void login()//function for login
{
//list of variables	

int e=0	;
char d[15];
char Username[15];
char Password[15];
char original_Username[25]="admin";
char original_Password[15]="admin";

do
{
	printf("\n\n\n\n\t\t\t\tEnter Username and Password :");
	printf("\n\n\n\t\t\t\t\tUSERNAME:");
	scanf("%s",&Username);
	
	printf("\n\n\t\t\t\t\tPASSWORD:");
	scanf("%s",&Password);
	
	if (strcmp(Username,original_Username)==0 && strcmp(Password,original_Password)==0)
	{
	printf("\n\n\n\t\t\t\t\t...Login Successfull...\n\n");	
	printf("Press Y to proceed: ");
	scanf("%s",d);
	if(strcmp(d,"Y")==0)
		{
		menu(0);
		}//calling Menu 
		break;
	}
	else
	{
		printf("\n\t\t\tPassword in incorrect!! Try Again ");
		e++;
		
	}

}
while(e<=2);
	if(e>2)
	{
	printf("%d",e);
	printf("Login failed. Please try later.");
	
    exit1(0);
	}
 
//system("cls");
}