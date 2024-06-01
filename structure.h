#ifndef structure
#define structure
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

struct address
{
    int hno;
    char street[40];
    char city[40];
    char state[40];
};

struct patient
{
    char name[40];
    char fname[40];
    int age;
    char bg[3];
    char gender;
    char regn[10];
    struct address a;
    char ph[10];
    char disease[60];
    char doc_name[40];
    char history[200];
    char date[10];
    char treatment[40];
    char med[40];
}p;

struct staff
{
    char name[40];
    char fname[40];
    int age;
    char bg[3];
    char gender;
    char uid[10];
    struct address b;
    char ph[10];
    double salary;
    char desig[40];
}s;

struct inventory
{
    int sno;
    char name[30];
    char dop[20];
    int qnty;
    float price;
    float amount;
}inv;

void menu();
int pat();
int emp();
//int edit();

void garbage()
{
	strcpy(p.history,"No record");
	strcpy(p.date,"NO");
	strcpy(p.treatment,"NO Info");
	strcpy(p.med,"No Info");
}


#endif
