#include<stdio.h>
#include"header.h"
int edit(int read, char temp[])
{
FILE *fp, *ft;

int valid=0;
char ch;
char roomnumber[20];
system("cls");
ft=fopen("temp.dat","w+");
fp=fopen("customer.dat","r");
if(fp==NULL)
{
printf("\n\t !! Can not open file !! ");
	
return 0;
}

printf("\n\n\t\t\t ****************** Edit Customer Details ***************************\n");

if(read==0)
{
printf("Enter Room number of the customer to edit:\n\n");
scanf("%s",roomnumber);
}
else
{
strcpy(roomnumber,temp);
}
fflush(stdin);
if(ft==NULL)
{
printf("\n !! Can not open file !!");
			
return 0;
}

while(fscanf(fp,"%s %s %s %s %s %s\n", c.roomnumber, c.name, c.address, c.phonenumber, c.nationality, c.email, c.period, c.arrivaldate)!=EOF)
{
if(strcmp(c.roomnumber,roomnumber)==0)
{
valid=1;
printf("\n\n********** Current Details **********\n\n");
 printf("Room no: %s \n\n", c.roomnumber);
printf("Customer name: %s \n", c.name);
printf("Address: %s \n", c.address);
printf("Phone no: %s \n", c.phonenumber);
printf("Nationality: %s \n", c.nationality);
printf("email: %s \n", c.email);
printf("Duration of stay: %s \n", c.period);
printf("Arrival date: %s \n", c.arrivaldate);

printf("\n\n********** Enter New Details *********\n\n");

printf("\n\nEnter New name: ");
scanf("%s",c.name);
printf("Enter new address: ");
scanf("%s",c.address);
printf("Enter new phone no: ");
scanf("%s",c.phonenumber);
printf("Enter new nationality: ");
scanf("%s",c.nationality);
printf("Enter new email: ");
scanf("%s",c.email);
printf("Enter new stay duration: ");
scanf("%s",c.period);
printf("Enter new arrival date: ");
scanf("%s",c.arrivaldate);
printf("Press Y to update: ");
scanf("%c",&ch);

if(ch=='Y')
{
fprintf(ft,"%s %s %s %s %s %s\n", c.roomnumber, c.name, c.address, c.phonenumber, c.nationality, c.email, c.period, c.arrivaldate);
printf("\n\n********** Details Updated *********");
}
}
else
{
fprintf(ft,"%s %s %s %s %s %s\n", c.roomnumber, c.name, c.address, c.phonenumber, c.nationality, c.email, c.period, c.arrivaldate);
}
if(!valid) printf("\n\t\t!!!! NO RECORD FOUND !!!!");
fclose(ft);
fclose(fp);
remove("customer.dat");
rename("temp.dat","customer.dat");
return 1;
}
