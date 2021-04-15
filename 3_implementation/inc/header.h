#ifndef __HEADER_H__
#define __HEADER_H__
#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<time.h>



typedef struct customer   //STRUCTURE DECLARATION
{
char roomnumber[10];
char name[20];
char address[25];
char phonenumber[15];
char nationality[15];
char email[30];
char period[10];
char arrivaldate[10];
} customer;

customer c,temp;

void login();
void welcome();
int menu(int read);
int search(int read,char temp[]);
int add(int read);
int list(int read);
int edit(int read, char temp[]);
int delete1(int read, char temp[]);
int exit1(int read);



 

#endif