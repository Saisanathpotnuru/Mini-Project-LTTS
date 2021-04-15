#include<stdio.h>
#include"header.h"
int search(int read, char temp[])
{
system("cls");

FILE *fp;
char roomnumber[20];
char d[15];
int flag=1;
fp=fopen("customer.dat","r");
printf("\n\n\t\t\t ****************** Searching Room Details ***************************\n");

printf("\n\n\nEnter Room number of the customer to search the details: \n");
if(read==0)
{
scanf("%s",roomnumber);
}
else
{
strcpy(roomnumber,temp);
}
fflush(stdin);
while(fscanf(fp,"%s %s %s %s %s %s\n", c.roomnumber, c.name, c.address, c.phonenumber, c.nationality, c.email, c.period, c.arrivaldate)!=EOF)
{
if(strcmp(c.roomnumber,roomnumber)==0){
flag=0;
printf("\n\tRecord Found\n\n ");
printf("Room no: %s \n\n", c.roomnumber);
printf("Customer name: %s \n", c.name);
printf("Address: %s \n", c.address);
printf("Phone no: %s \n", c.phonenumber);
printf("Nationality: %s \n", c.nationality);
printf("email: %s \n", c.email);
printf("Duration of stay: %s \n", c.period);
printf("Arrival date: %s \n", c.arrivaldate);
flag=0;
break;
}
}
if(flag==1){
printf("\n\tRequested Customer could not be found!\n\n");
printf("Press Y to proceed: ");
scanf("%s",d);
if(strcmp(d,"Y")==0)
{
menu(0);
}
return 1;
}
fclose(fp);
printf("Press Y to proceed: ");
scanf("%s",d);
if(strcmp(d,"Y")==0)
{
menu(0);
}
return 1;
}