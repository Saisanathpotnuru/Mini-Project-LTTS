#include<stdio.h>
#include"header.h"

int add(int read)
{
    system("cls");
    FILE*fp;
    fp=fopen("customer.dat","a");

    printf("\n\n\t\t\t ****************** Book a Room ***************************\n");

    printf("\n\t\t\tRoom number: ");
    if(read==0)
	{
	scanf("%s",c.roomnumber);
	}

    printf("\n\t\t\tCustomer name: ");
    if(read==0)
	{
	scanf("%s",c.name);
	}

    printf("\n\t\t\tAddress: ");
    if(read==0)
	{
	scanf("%s",c.address);
	}

    printf("\n\t\t\tPhone no: ");
    if(read==0)
	{
	scanf("%s",c.phonenumber);
	}

    printf("\n\t\t\tNationality: ");
    if(read==0)
	{
	scanf("%s",c.nationality);
	}

    printf("\n\t\t\temail: ");
    if(read==0)
	{
	scanf("%s",c.email);
	}

    printf("\n\t\t\tPeriod of stay: ");
    if(read==0)
	{
	scanf("%s",c.period);
	}

    printf("\n\t\t\tArrival date: ");
    if(read==0)
	{
	scanf("%s",c.arrivaldate);
	}

    fprintf(fp," %s %s %s %s %s %s\n", c.roomnumber, c.name, c.address, c.phonenumber, c.nationality, c.email, c.period, c.arrivaldate);
    printf("\n\n\t\t\t.... BOOKING SUCCESSFUL ....\n");
    fclose(fp);//file is closed

    return 1;

}