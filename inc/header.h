#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<time.h>
typedef struct customerdetails   //STRUCTURE DECLARATION
{
char roomnumber[10];
char name[20];
char address[25];
char phonenumber[15];
char nationality[15];
char email[20];
char period[10];
char arrivaldate[10];
} customerdetails;

customerdetails s;

void add();  //FUNCTIONS
void list();
void edit();  //GLOBALLY DECLARED FUNCTIONS N VARIABLE
void remove2();
void search();
 
void setcolor(int ForgC)
{ WORD wColor;
HANDLE hStdOut=GetStdHandle(STD_OUTPUT_HANDLE);
CONSOLE_SCREEN_BUFFER_INFO csbi;
 
if(GetConsoleScreenBufferInfo(hStdOut,&csbi))
{
wColor=(csbi.wAttributes &0xB0)+(ForgC &0x0B);
// SetConsoleTextAttributes(hStdOut,wColor);
SetConsoleTextAttribute(hStdOut,wColor);
 
}
}