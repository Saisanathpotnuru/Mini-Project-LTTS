/**
 * @file header.h
 * @author Sai Sanath P
 * @brief  Hotel Management System header file
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __HEADER_H__
#define __HEADER_H__
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

/**
 * @brief type def for customer details
 * 
 */
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
/**
 * @brief login function
 * 
 */
void login();

/**
 * @brief welcome page
 * 
 */
void welcome();

/**
 * @brief menu page
 * 
 * @param read 
 * @return int 
 */
int menu(int read);

/**
 * @brief search details of customer
 * 
 * @param read 
 * @param temp 
 * @return int 
 */
int search(int read,char temp[]);

/**
 * @brief add details of customers
 * 
 * @param read 
 * @return int 
 */
int add(int read);

/**
 * @brief list all customers currently in rooms
 * 
 * @param read 
 * @return int 
 */
int list(int read);

/**
 * @brief edit details in case of error
 * 
 * @param read 
 * @param temp 
 * @return int 
 */
int edit(int read, char temp[]);

/**
 * @brief delete details of customer
 * 
 * @param read 
 * @param temp 
 * @return int 
 */
int delete1(int read, char temp[]);

/**
 * @brief exit the function
 * 
 * @param read 
 * @return int type
 */
int exit1(int read);



 

#endif