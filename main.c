#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"structure.h"
#include<string.h>
#include "patient.h"
//#include "doctor.h"

int main()
{
	system("COLOR F5");
	menu();
}
void menu()
{
	char ch,yourname[10],d[25]="Password Protected",pass[10],choice;
	int i=0,j,n;
	system("cls");
	for(j=0;j<20;j++)
	{
		Sleep(50);
		printf("*");
	}
	for(j=0;j<20;j++)
	{
		Sleep(50);
		printf("%c",d[j]);
	}
	for(j=0;j<20;j++)
	{
		Sleep(50);
		printf("*");
	}
	printf("\n");
	printf("\tEnter your name:");
	fflush(stdin);
	scanf("%[^\n]",yourname);
	printf("\n\tEnter Password:");
	fflush(stdin);
	while(1)
	{
		ch=getch();
		if(ch==13)
		break;
		else if(ch==8)
		{
			if(i>0)
			{
				i--;
				pass[i]=ch;
				printf("\b \b");
			}
		}
		else
		{
			putch('*');
			pass[i]=ch;
			i++;
		}
	}
	pass[i]='\0';
	if(strcmp(pass,"sanjay123")==0 && strcmp(yourname,"sajida")==0)
	{
	printf("\nPassword match\nPress any key to continue......");
	getch();
	system("cls");
	}
	else
	{
	printf("\a \n Warning!! Incorrect Password");
	getch();
	printf("\n Exiting the program");
	Sleep(2);
	exit (1);
	}
	panel:
	//char choice;
	//remove("C:\\New\\temp.txt");
	
    printf("\t\t*************************************************");
    printf("\n\t\t  *** WELCOME TO HOSPITAL MANAGEMENT SYSTEM ***");
    printf("\n\t\t*************************************************");
    printf("\n\n\n\n\n\n\n");
    printf("\t\t1.PATIENT");
    printf("\n\t\t2.DOCTOR");
	// printf("\n\t\t3.INVENTORY");
    //printf("\n\t\t4.Admin");
    printf("\n\t\t0.EXIT");
    printf("\n\n\tEnter your choice: ");
    fflush(stdin);
    choice=getch();
    switch(choice)
        {
            case '1':
            	remove("C:\\New\\patient.txt");
                rename("C:\\New\\temp.txt","C:\\New\\patient.txt");
                printf("Patient");
                n=pat();
                if(n==1)
               goto panel;
                break;
            case '2':
                
                printf("Doctor");
               n= emp();
               if(n==1)
               goto panel;
                break;
          /*case '3':
                inv();
                break;*/
            /*case '3';
                admin();
                break;*/
            case '0':
                exit(1);
        }
}
void discard()
{
	//remove("C:\\New\\patient.txt");
	rename("C:\\New\\temp.txt","C:\\New\\sanjay.txt");
}