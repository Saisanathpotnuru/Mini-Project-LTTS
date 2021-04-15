#include<stdio.h>
#include"header.h"
int list(int read)
{

system("cls");
FILE *fp;
char d[15];
int r;
 fp=fopen("customer.dat","r");

printf("\n\n\t\t\t ****************** List 0f Customers ***************************\n");

r=17;
		while(fscanf(fp,"%s %s %s %s %s %s\n", c.roomnumber, c.name, c.address, c.phonenumber, c.nationality, c.email, c.period, c.arrivaldate)!=EOF)
        {
            printf("Room no: %s \n\n", c.roomnumber);
            printf("Customer name: %s \n", c.name);
            printf("Address: %s \n", c.address);
            printf("Phone no: %s \n", c.phonenumber);
            printf("Nationality: %s \n", c.nationality);
            printf("email: %s \n", c.email);
            printf("Duration of stay: %s \n", c.period);
            printf("Arrival date: %s \n\n\n", c.arrivaldate);

            r++;
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