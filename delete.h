#include"structure.h"
int emp()
{
    FILE *fs,*fx;
    char more,c;
    char id[20],s_name[40];
    int iF=0;
    long long int si;
    //struct staff s;
    //=fopen("emp.txt","r");
    //if(fs==NULL)
       // {
        //    fs=fopen("emp.DAT","wb+");
        //    if(fs==NULL)
        //        {
        //            puts("\nSorry!! Cannot open file");
         //           exit(1);
         //       }
       // }
    while(1)
        {
            system("cls");
            printf("\n\t\t\tDOCTOR");
            printf("\n\t\t1.Add an Entry");
            printf("\n\t\t2.Modify Existing One");
            printf("\n\t\t3.Search an Entry");
            printf("\n\t\t4.Listing of all records");
            printf("\n\t\t5.Delete an Entry");
            printf("\n\t\t6.Main Menu");
            printf("\n\n\t\tEnter your choice here: ");
            fflush(stdin);
            c=getch();
            switch(c)
                {
                	case '1':
                    system("cls");
                    //fseek(fs,0,SEEK_END);
                    more='Y';
                    while(more=='Y'||more=='y')
                        {
                            u:
                            iF=0;
                            printf("\n\n\nEnter the UID of the DOCTOR: ");
                            scanf("%s",id);
                            //rewind(fs);
                            fs=fopen("doctor.txt","r");
                            while(fread(&s,sizeof(s),1,fs)==1)
                                {
                                    if(strcmp(s.uid,id)==0)
                                        {
                                            iF++;
                                            printf("\n\t\tTHIS UID ALREADY EXISTS. ENTER ANOTHER ONE");
                                            goto u;
                                        }
                                }
                                fclose(fs);
                                fx=fopen("doctor.txt","a");
                                
                            if(iF==0)
                                {
                                    strcpy(s.uid,id);
                                    fflush(stdin);
                                    printf("\nEnter the name of the DOCTOR: ");
                                    gets(s.name);
                                    //printf("\nEnter the name of the Guardian: ");
                                    //gets(s.fname);
                                    printf("\nEnter the gender of the Employee(M.male or F.female): ");
                                    scanf("%c",&s.gender);
                                    printf("\nEnter the Blood group of the Employee: ");
                                    scanf("%s",s.bg);
                                    printf("\nEnter the age of the Employee: ");
                                    scanf("%d",&s.age);
                                    printf("\nEnter the Salary of the Employee: ");
                                    scanf("%lf",&s.salary);
                                    //printf("\nEnter the address of the Employee:\n");
                                    //printf("\n\tEnter the house number: ");
                                    //scanf("%d",&s.b.hno);
                                    //fflush(stdin);
                                    //printf("\n\tEnter the street/colony: ");
                                    //scanf("%s",s.b.street);
                                    printf("\n\tEnter the city: ");
                                    scanf("%s",s.b.city);
                                    //printf("\n\tEnter the state: ");
                                    //scanf("%s",s.b.state);
                                    printf("\nEnter the phone number of the Employee: ");
                                    scanf("%s",s.ph);
                                    fflush(stdin);
                                    printf("\nEnter the Designation: ");
                                    gets(s.desig);
                                    fwrite(&s,sizeof(s),1,fx);
                                    fclose(fx);
                                    printf("\n----------------------------------------------------");
                                    printf("\nWant to add entry of the another Employee(Y/N): ");
                                    fflush(stdin);
                                    more=getch();
                                }
                            }
                        break;
                    case '2':
                        system("cls");
                        more='Y';
                        long long int size;
                        while(more=='Y'||more=='y')
                            {
                                printf("\nEnter the UID of the patient to modify: ");
                                scanf("%s",id);
                                //rewind(fs);
                                fs=fopen("doctor.txt","r+");
                                //fx=fopen("temp.txt","w");
                                while(fread(&s,sizeof(s),1,fs)==1)
                                    {
                                        if(strcmp(s.uid,id)==0)
                                            {
                                                fflush(stdin);
                                                printf("\nEnter the new name of the Doctor: ");
                                                gets(s.name);
                                                printf("\nEnter the new name of the Guardian: ");
                                                gets(s.fname);
                                                printf("\nEnter the new Blood group of the Doctor: ");
                                                scanf("%s",s.bg);
                                                printf("\nEnter the new age of the Doctor: ");
                                                scanf("%d",&s.age);
                                                printf("\nEnter the new Salary of the Doctor: ");
                                                scanf("%lf",&s.salary);
                                                printf("\nEnter the new address of the Doctor:\n");
                                                //printf("\n\tEnter the house number: ");
                                                //scanf("%d",&s.b.hno);
                                                fflush(stdin);
                                                //printf("\n\tEnter the street/colony: ");
                                                //scanf("%s",s.b.street);
                                                printf("\n\tEnter the city: ");
                                                scanf("%s",s.b.city);
                                                //printf("\n\tEnter the state: ");
                                                //scanf("%s",s.b.state);
                                                printf("\nEnter the new phone number of the Employee: ");
                                                scanf("%s",s.ph);
                                                size=sizeof(struct staff);
                                                fseek(fs,-size,1);
                                                fwrite(&s,sizeof(s),1,fs);
                                                break;
                                            }
                                            
                                        }
                                        fclose(fs);
                                        //fclose(fx);
                                      //remove("doctor.txt");
                                      //rename("temp.txt","doctor.txt");
                                    printf("\n----------------------------------------------------");
                                    printf("\nModify another Record(Y/N): ");
                                    fflush(stdin);
                                    more=getch();
                                }
                            break;
                        case '3':
                            system("cls");
                            more='Y';
                            while(more=='Y'||more=='y')
                                {
                                    printf("\nEnter name to search: ");
                                    gets(s_name);
                                    fs=fopen("doctor.txt","r");
                                    while(fread(&s,sizeof(s),1,fs)==1)
                                        {
                                            if(strcmp(s.name,s_name)==0)
                                                {
                                                    printf("\nUID of the Employee : ");
                                                    puts(s.uid);
                                                    printf("\nName of the Employee : ");
                                                    puts(s.name);
                                                    printf("\nName of the Guardian : ");
                                                    puts(s.fname);
                                                    printf("\nAge : %d",s.age);
                                                    printf("\nSalary: %lf",s.salary);
                                                    printf("\nGender : %c",s.gender);
                                                    printf("\nBlood group: %s",s.bg);
                                                    printf("\nAddress  : %d,%s,%s,%s",s.b.hno,s.b.street,s.b.city,s.b.state);
                                                    printf("\nphone number : +91-%s",s.ph);
                                                    printf("\nDesignation : %s",s.desig);
                                                }
                                        }
                                    printf("\n----------------------------------------------------");
                                    printf("\nSearch another Entry(Y/N): ");
                                    fflush(stdin);
                                    more=getch();
                                }
                            break;
                        case '4':
                           system("cls");
                            fs=fopen("doctor.txt","r");
                            while(fread(&s,sizeof(s),1,fs)==1)
                                {
                                    printf("\nUID of the Doctor : ");
                                    puts(s.uid);
                                    printf("\nName of the Doctor : ");
                                    puts(s.name);
                                    //printf("\nName of the Guardian : ");
                                    //puts(s.fname);
                                    printf("\nAge : %d",s.age);
                                    printf("\nSalary: %lf",s.salary);
                                    printf("\nGender : %c",s.gender);
                                    printf("\nBlood group: %s",s.bg);
                                    printf("\nAddress  : %s",/*s.b.hno,s.b.street,*/s.b.city/*,s.b.state*/);
                                    printf("\nphone number : +91-%s",s.ph);
                                    printf("\nDesignation : %s",s.desig);
                                    printf("\n----------------------------------------------------\n");
                                }
                            getch();
                            break;
                         case '5':
                            system("cls");
                            more='Y';
                            while(more=='Y'||more=='y')
                                {
                                    printf("\nEnter the UID of the Doctor to be deleted: ");
                                    scanf("%s",id);
                                    fs=fopen("doctor.txt","r");
                                    fx=fopen("tem.txt","w");
                                    //rewind(fs);
                                    while(fread(&s,sizeof(s),1,fs)==1)
                                        {
                                            if(strcmp(s.uid,id)==0)
                                            {
                                            	printf("\nThe Record has been Deleted Successfully.");
                                            	continue;
											}
                                            fwrite(&s,sizeof(s),1,fx);
                                        }
                                         fflush(stdin);
                                    fclose(fs);
                                    fclose(fx);
                                      fx=fopen("doctor.txt","w");
                                    fs=fopen("tem.txt","r");
                                    while(fread(&s,sizeof(s),1,fs)==1)
                                    {
                                    	fwrite(&s,sizeof(s),1,fx);
									}
									fclose(fs);
									fclose(fx);
                                   remove("tem.txt");
                                    //discard();
                                    printf("\nDelete another record?(Y/N): ");
                                    fflush(stdin);
                                    more=getch();
                                }
                                break;
                            case '6':
                            	system("cls");
                            	return 1;
                            	break;
                    }}return 0;
                }