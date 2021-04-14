#include<stdio.h>
#include"header.h"
int search(int read)
{
system("cls");

FILE *fp;
char roomnumber[20];
int flag=1;
fp=fopen("customer.dat","r");
printf("\n\n\t\t\t ****************** Searching Room Details ***************************\n");

printf("\n\n\nEnter Room number of the customer to search the details: \n");
scanf("%s", roomnumber);
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
printf("\n\tRequested Customer could not be found!");
return 0;
}
fclose(fp);
return 1;
}