#include<stdio.h>
#include"header.h"

int menu(int read)//function decleration
{
	customer t;
	
	
	system("cls");
	int choose,ex=0;
	while(ex!=1)
	{
		printf("\n\n\t\t\t *************************** MENU ***************************\n\n\n");
	printf("\n\n\n\n\n\t\t\t\t1. Book a room\n");
	printf("\n\t\t\t\t2. View customers details\n");
	printf("\n\t\t\t\t3. Search customer details\n");
	printf("\n\t\t\t\t4. Edit customer details\n");
	printf("\n\t\t\t\t5. Delete customer record\n");
	printf("\n\t\t\t\t6. Exit\n");
	printf("\n\n\n \n\t\t\t\tChoose from 1 to 6:");
	if(read==0)
	{
	scanf("%i", &choose);
	}
	else{
		choose=read;
	}
	
	switch(choose)//switch to differeht case
	{
	
	case 1:
	    add(0);//Add_rec function is called
    	return 1;
    case 2:
    	list(0);
    	return 2;
	case 3:
	    search(0);//View_rec function is call
    	return 3;
	case 4:
		edit(0,"");//Edit_rec function is call
		return 4;
	case 5:
		delete1(0,"");//Dlt_rec function is call
		return 5;
	case 6:
		ex=1;
		exit1(0);//ex_it function is call
    	return 6;



	default:
		printf("\t\t\tInvalid entry. Please enter right option :)");
		
		return 0;
	}//end of switch
	return 1;
	}
		
	
}