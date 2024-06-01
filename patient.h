#include "structure.h"
#include "delete.h"
//#include "doctor.h"
int pat()
{
	FILE *fp,*ft,*pf;
    char ch,another,z;
    char reg[20],pname[40];
    int i=0;
    //fp=fopen("ptt.txt","r");
    long long int size;
  
    //if(fp==NULL)
    //{
    //	fp=fopen("C:\\New\\C:\\New\\C:\\New\\C:\\New\\C:\\New\\C:\\New\\C:\\New\\C:\\New\\C:\\New\\C:\\New\\C:\\New\\C:\\New\\C:\\New\\C:\\New\\C:\\New\\C:\\New\\C:\\New\\patient.txt","w");
    	//  if(fp==NULL)
             //   {
                   // puts("\nSorry!! Cannot open file");
                   // exit(1);
                //}
               // else{
               // fp=fopen("patient.txt","r");fclose(fp);}
//    }
    while(1)
    {
    	system("cls");
    	
    	printf("\n\n\t\t\tPATIENT");
            printf("\n\t\t1.Enter a New Entry");
            printf("\n\t\t2.Modify Existing");
            printf("\n\t\t3.Search an Entry");
            printf("\n\t\t4.Listing of records");
            printf("\n\t\t5.Delete an Entry");
            printf("\n\t\t6.Main Menu");
            //del();
            printf("\n\n\t\tEnter your choice here: ");
            fflush(stdin);
            ch=getch();
            switch(ch)
            {
            	case '1':
            		system("cls");
            		//fseek(fp,0,2);
            		another='Y';
            		while(another=='Y' || another=='y')
            		{
            			w:
            				i=0;
            				fp=fopen("patient.txt","r");
            				printf("\n\n\nEnter Registration Number: ");
                            scanf("%s",reg);
                            //rewind(fp);
                            while(fread(&p,sizeof(p),1,fp)==1)
                                {
                                    if(strcmp(p.regn,reg)==0)
                                        {
                                            i++;
                                            printf("\n\t\tTHIS REGISTRATION NUMBER ALREADY EXISTS. ENTER ANOTHER ONE");
                                            fclose(fp);
                                            goto w;
                                        }
                                }
                                fclose(fp);
                                pf=fopen("patient.txt","a+");
                                //rewind(fp);
                            if(i==0)
                            {
                            	strcpy(p.regn,reg);
                            	fflush(stdin);
                            	printf("\nEnter the name of the patient: ");
                                    gets(p.name);
                                    printf("\nEnter the name of the Guardian: ");
                                    gets(p.fname);
                                    printf("\nEnter the gender of the patient(M.male or F.female): ");
                                    scanf("%c",&p.gender);
                                    fflush(stdin);
                                    printf("\nEnter the Blood group of the patient: ");
                                    scanf("%s",p.bg);
                                    fflush(stdin);
                                    printf("\nEnter the age of the patient: ");
                                    scanf("%d",&p.age);
                                    printf("\nEnter the address of the patient:\n");
                                    printf("\n\tEnter the house number: ");
                                    scanf("%d",&p.a.hno);
                                    fflush(stdin);
                                    printf("\n\tEnter the street/colony: ");
                                    scanf("%[^\n]",p.a.street);
                                    printf("\n\tEnter the city: ");fflush(stdin);
                                    scanf("%[^\n]",p.a.city);
                                    printf("\n\tEnter the state: ");fflush(stdin);
                                    scanf("%[^\n]",p.a.state);
                                    printf("\nEnter the phone number of the patient: ");
                                    scanf("%s",p.ph);
                                    fflush(stdin);
                                    printf("\nEnter the Disease or problem for which he/she wants treatment: ");
                                    gets(p.disease);fflush(stdin);
                                    printf("\nEnter the name of the Doctor to which he/she being referred: ");
                                    gets(p.doc_name);
                                    printf("\nEnter the history, if any, related to treatment of the patient(If yes then write 'Y' if NO then write 'N'): ");
                                    scanf("%c",&z);
                                    if(z=='N' || z=='n')
                                    {
                                    	garbage();
                                    	goto out;
                                    
									}
									else
									{
										fflush(stdin);
                                            printf("\nHistory:");
                                            gets(p.history);
                                            fflush(stdin);
                                            printf("\nEnter the date of treatment:");
                                            scanf("%s",p.date);
                                            printf("\nTreatment Given:");
                                            scanf("%s",p.treatment);
                                            printf("\nMedicine Prescribed:");
                                            scanf("%s",p.med);
                                        }
                                    //fclose(fp);
                                    //fp=fopen("pat.txt","ab+");
                                    out:
                                    printf("\n----------------------------------------------------");
                                    fwrite(&p,sizeof(struct patient),1,pf);
                                    fclose(pf);
                                	printf("\nWant to add entry of the another Patient(Y/N): ");
                                    fflush(stdin);
                                    another=getch();
                                    
                                    //fp=fopen("patient.txt","r")
										}
									}
							break;
					case '2':
						 	another='Y';
						 	long long int siz;
    					while(another=='Y'||another=='y')
        {
            fp=fopen("patient.txt","r+");
            //pf=fopen("temp.txt","w");
            printf("\nEnter the Registration number of the patient to modify: ");
            scanf("%s",reg);
                    while(fread(&p,sizeof(p),1,fp)==1)
                            {
                                  if(strcmp(p.regn,reg)==0)
                                    {
                                              fflush(stdin);
                                        printf("\nEnter the new name of the patient: ");fflush(stdin);
                                                    gets(p.name);
                                                    printf("\nEnter the new name of the Guardian: ");fflush(stdin);
                                                    gets(p.fname);
                                                    printf("\nEnter the new Blood group of the patient: ");fflush(stdin);
                                                    scanf("%s",p.bg);
                                                    printf("\nEnter the new age of the patient: ");
                                                    scanf("%d",&p.age);
                                                    printf("\nEnter the new address of the patient:\n");
                                                    printf("\n\tEnter the house number: ");
                                                    scanf("%d",&p.a.hno);
                                                    fflush(stdin);
                                                    printf("\n\tEnter the street/colony: ");fflush(stdin);
                                                    scanf("%[^\n]",p.a.street);
                                                    printf("\n\tEnter the city: ");fflush(stdin);
                                                    scanf("%[^\n]",p.a.city);
                                                    printf("\n\tEnter the state: ");fflush(stdin);
                                                    scanf("%[^\n]",p.a.state);
                                                    printf("\nEnter the new phone number of the patient: ");
                                                    scanf("%s",p.ph);
                                                    fflush(stdin);
                                                    printf("enter the date of treatment given: ");
                                                    gets(p.date);
                                                    printf("\nEnter the detail of treatment given: ");
                                                    gets(p.treatment);
                                                    printf("\nEnter the medicines prescribed: ");
                                                    gets(p.med);
                                                    siz=sizeof(struct patient);
                                                    fseek(fp,-siz,1);
                                                    fwrite(&p,sizeof(p),1,fp);
                                                    break;
                                                }
                                                
                                            }
                            fclose(fp);
                           //fclose(pf);
                            //discartion();
                            fflush(stdin);
                            printf("\n----------------------------------------------------");
                                            printf("\nModify another Entry(Y/N): ");
                            another=getch();
								}
						 //edit();
						 
                        break;
                        case '3':
                        	system("cls");
                                another='Y';
                                fp=fopen("C:\\New\\patient.txt","r");
                                while(another=='Y'||another=='y')
                                    {
                                        printf("\nEnter name to search: ");
                                        gets(pname);
                                        rewind(fp);
                                        while(fread(&p,sizeof(p),1,fp)==1)
                                            {
                                                if(strcmp(p.name,pname)==0)
                                                    {
                                                        printf("\nRegistration Number of the Patient : ");
                                                        puts(p.regn);
                                                        printf("\nName of the Patient : ");
                                                        puts(p.name);
                                                        printf("\nName of the Guardian : ");
                                                        puts(p.fname);
                                                        printf("\nAge : %d",p.age);
                                                        printf("\nGender : %c",p.gender);
                                                        printf("\nBlood group: %s",p.bg);
                                                        printf("\nAddress  : %d,%s,%s,%s",p.a.hno,p.a.street,p.a.city,p.a.state);
                                                        printf("\nphone number : +91-%s",p.ph);
                                                        printf("\nDisease : %s",p.disease);
                                                        printf("\nEarlier History : ");
                                                        puts(p.history);
                                                        printf("\nDetails of treatment given and medicine prescribed:");
                                                        printf("\nDATE\t\tTREATMENT GIVEN\t\tMEDICINE PRESCRIBED\n");
                                                        printf("%s\t\t %s\t\t %s\n",p.date,p.treatment,p.med);
                                                        printf("\nName of the Doctor : ");
                                                        puts(p.doc_name);
                                                    }
                                                }//check
                                            printf("\n----------------------------------------------------");
                                            printf("\nSearch another Entry(Y/N): ");
                                            fflush(stdin);
                                            another=getch();
                                        }
                                        fclose(fp);
                                    break;
                        case '4':
                            system("cls");
                            fp=fopen("patient.txt","r");
                                //rewind(fp);
                                while(fread(&p,sizeof(p),1,fp)==1)
                                    {
                                        printf("\nRegistration Number of the Patient : ");
                                        puts(p.regn);
                                            printf("\nName of the Patient : ");
                                            puts(p.name);
                                            printf("\nName of the Guardian : ");
                                            puts(p.fname);
                                            printf("\nAge : %d",p.age);
                                            printf("\nGender : %c",p.gender);
                                            printf("\nBlood group: %s",p.bg);
                                            printf("\nAddress  : %d,%s,%s,%s",p.a.hno,p.a.street,p.a.city,p.a.state);
                                            printf("\nphone number : +91-%s",p.ph);
                                            printf("\nDisease : %s",p.disease);
                                            printf("\nEarlier History : ");
                                            puts(p.history);
                                            printf("\nDetails of treatment given and medicine prescribed:");
                                            printf("\nDATE\t\t TREATMENT GIVEN\t\t\t MEDICINE PRESCRIBED\n");
                                            printf("%s\t\t %s\t\t\t %s\n",p.date,p.treatment,p.med);
                                            printf("\nName of the Doctor : ");
                                            puts(p.doc_name);
                                            printf("\n----------------------------------------------------\n\n");
                                        }
                                    getch();
                                break;
                                
                        case '5':
                                system("cls");
                                another='Y';
                                //remove("C:\\New\\patient.txt");
                                while(another=='Y'||another=='y')
                                    {
                                    	i=0;
                                        printf("\nEnter the Registration number of the Patient to be deleted: ");
                                        scanf("%s",reg);
                                        pf=fopen("C:\\New\\temp.txt","w");
                                       	fp=fopen("C:\\New\\patient.txt","r");
                                        while(fread(&p,sizeof(p),1,fp)==1)
                                            {
                                                if(strcmp(p.regn,reg)==0){
                                                printf("The record has been Deleted successfully");
                                                i++;
                                                continue;
                                                
                                            }
                                                fwrite(&p,sizeof(p),1,pf);
                                            }
                                        fclose(fp);
                                        fclose(pf);
                                        
                                        fp=fopen("patient.txt","w");
                                        pf=fopen("temp.txt","r");
                                        
                                        while(fread(&p,sizeof(p),1,pf)==1)
                                        {
                                        	fwrite(&p,sizeof(p),1,fp);
										}
                                        fclose(fp);
                                        fclose(pf);
                                        remove("temp.txt");
                                        //discard();
                                        //fp=fopen("ptt.txt","r");
                                        printf("\nDelete another record?(Y/N): ");
                                        fflush(stdin);
                                        another=getch();
                                    }
                                    
                                break;
                        case '6':
                        	system("cls");
                        	return 1;
                        	break;
                        default:
                        	return 0;
			}
	}
	return 0;
}
