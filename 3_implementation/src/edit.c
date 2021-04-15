#include<stdio.h>
#include"header.h"
int edit(int read, char temp[])
{
FILE *fp, *ft;

int valid=0;
char ch[15];
char d[15];
char roomnumber[20];
system("cls");
fp=fopen("customer.dat","r");
ft=fopen("temp.dat","w+");

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
printf("\n\nEnter New roomnumber: ");
scanf("%s",c.roomnumber);
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
scanf("%s",ch);
if(strcmp(ch,"Y")==0)
{
fprintf(ft,"%s %s %s %s %s %s\n", c.roomnumber, c.name, c.address, c.phonenumber, c.nationality, c.email, c.period, c.arrivaldate);
printf("\n\n********** Details Updated *********\n\n");
}
}
else
{
fprintf(ft,"%s %s %s %s %s %s\n", c.roomnumber, c.name, c.address, c.phonenumber, c.nationality, c.email, c.period, c.arrivaldate);
}
}

if(!valid) printf("\n\t\t!!!! NO RECORD FOUND !!!!");
fclose(ft);
fclose(fp);
remove("customer.dat");
rename("temp.dat","customer.dat");
printf("Press Y to proceed: ");
scanf("%s",d);
if(strcmp(d,"Y")==0)
{
menu(0);
}
return 1;
}
