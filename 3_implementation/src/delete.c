#include<stdio.h>
#include"header.h"
int delete1(int read, char temp[])
{
FILE *fp,*ft;

int found=0;
char roomnumber[20];
char d[15];
system("cls");
ft=fopen("temp.dat","w+");
fp=fopen("customer.dat","r");
printf("\n\n\t\t\t ****************** Delete Customer Details ***************************\n\n\n");
printf("Enter the Room Number of the hotel to be deleted from the database: \n");
fflush(stdin);
if(read==0)
{
scanf("%s",roomnumber);
}
else
{
strcpy(roomnumber,temp);
}
while(fscanf(fp,"%s %s %s %s %s %s\n", c.roomnumber, c.name, c.address, c.phonenumber, c.nationality, c.email, c.period, c.arrivaldate)!=EOF)
{
if(strcmp(c.roomnumber,roomnumber)!=0)
{       
fprintf(ft,"%s %s %s %s %s %s\n", c.roomnumber, c.name, c.address, c.phonenumber, c.nationality, c.email, c.period, c.arrivaldate);
}
else
{
printf("%s %s %s %s %s %s\n", c.roomnumber, c.name, c.address, c.phonenumber, c.nationality, c.email, c.period, c.arrivaldate);
found=1;
}
if(found==0)
{
printf("\n\n Records of Customer in this  Room number is not found!!\n\n");
printf("Press Y to proceed: ");
scanf("%s",d);
if(strcmp(d,"Y")==0)
{
menu(0);
}
return 0;
}
else
{
fclose(fp);
fclose(ft);
remove("customer.dat");
rename("temp.dat","customer.dat");
printf("\n\n\t\t\t ********** Record deleted **********\n\n");
printf("Press Y to proceed: ");
scanf("%s",d);
if(strcmp(d,"Y")==0)
{
menu(0);
}
return 1;
}
}
}