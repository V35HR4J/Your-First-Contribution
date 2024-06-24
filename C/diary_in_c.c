#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void add_diary();
void add_contact();
void search_diary();
void search_contact();
void delete_diary();

void main(){
start:
system("cls");
system("color F1");
printf("\t\t\t\t\t          DIARY\n\n\n");
printf("\t1. Add Diary\n\n");
printf("\t2. View Diary\n\n");
printf("\t3. Delete a Diary\n\n");
printf("\t4. View all diaries\n\n");
printf("\t5. Exit\n\n");
printf("\n\n\n\n\n\n\n\n\n\nEnter your selection : ");
int option;
scanf("%d",&option);
switch(option)
{
case 1:
add_diary();
break;
case 2:
search_diary();
break;
case 3:
delete_diary();
break;
case 4:
view_all_diaries();
break;
case 5:
exit(0);
default:
main();
}
goto start;
}

void add_diary()
{
system("color F2");
FILE *dp;
dp=fopen("diary.txt","a+");
system ("cls");
printf("\t\t\t\t\t        ADD DIARY");
printf("\n\n\n\tDay         : ");
char day[20];
scanf("%s",day);
printf("\n\tDate        : ");
char date[20];
scanf("%s",date);
printf("\n\tName        : ");
char name[20];
scanf("%s",name);
printf("\n\tDiary Title : ");
char dname[20];
scanf("%s",dname);
printf("\n\tDiary       : ");
char diary[200];
scanf("%s",diary);
fprintf(dp,"%s %s %s %s %s\n",day,date,name,dname,diary);
fclose(dp);
printf("\n\n\n\n\tsaving record");
for(int i=0;i<3;i++){
sleep(1);
printf(".");}
printf("\n\tRecord Saved Successfully ");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\tPRESS ANY KEY TO CONTINUE");
getch();
return 0;
}

void search_diary()
{
system("color F3");
FILE *dp;
int a=1,i=1;
dp=fopen("diary.txt","r");
system("cls");
printf("\t\t\t\t\t        SEARCH DIARY");
printf("\n\n\n\tEnter Diary Title : ");
char dname[20];
scanf("%s",dname);
printf("\n\n\tsearching diary");
for(int i=0;i<3;i++){
sleep(1);
printf(".");}
char day[20],date[20],name[20],dname1[20],diary[200];
while(fscanf(dp,"%s %s %s %s %s\n",day,date,name,dname1,diary)!=EOF)
{
if(strcmp(dname,dname1)==0){
printf("\n\n\tDay         : %s",day);
printf("\n\tDate        : %s",date);
printf("\n\tName        : %s",name);
printf("\n\tDiary Title : %s",dname1);
printf("\n\tDiary       : %s",diary);
printf("\n\n");
}
else
a++;
i++;
}
if(a==i)
printf("\n\n\n\tNo such record found\n\n\n\n\n\n");
fclose(dp);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\tPRESS ANY KEY TO CONTINUE");
getch();
diary;
}

void delete_diary()
{
system("color F4");
int a=0,i=0;
FILE *dp,*dp1;
dp=fopen("diary.txt","r+");
dp1=fopen("tmp.txt","w");
system("cls");
printf("\t\t\t\t\t        DELETE DIARY");
printf("\n\n\n\tEnter Diary Title : ");
char dname[20];
scanf("%s",dname);
printf("\n\n\tsearching diary");
for(int i=0;i<3;i++){
sleep(1);
printf(".");}
char day[20],date[20],name[20],dname1[20],diary[200];
while(fscanf(dp,"%s %s %s %s %s\n",day,date,name,dname1,diary)!=EOF)
{
i++;
if(strcmp(dname,dname1)==0)
{
continue;
}
fprintf(dp1,"%s %s %s %s %s\n",day,date,name,dname1,diary);
if(strcmp(dname,dname1)!=0)
a++;
}
fclose(dp);
fclose(dp1);
dp=fopen("diary.txt","w");
dp1=fopen("tmp.txt","r");
while(fscanf(dp1,"%s %s %s %s %s\n",day,date,name,dname1,diary)!=EOF)
{
    fprintf(dp,"%s %s %s %s %s\n",day,date,name,dname1,diary);
}
fclose(dp);
fclose(dp1);
remove("tmp.txt");
if(a==i)
printf("\n\n\n\tNo such diary found");
else{
printf("\n\tdiary found");
printf("\n\n\tdeleting diary");
for(int i=0;i<3;i++){
sleep(1);
printf(".");}
printf("\n\tDiary Deleted Successfully");}
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\tPRESS ANY KEY TO CONTINUE");
getch();
return 0;
}

void view_all_diaries()
{
int j=0;
char a[11],b[11];
start:
system("color F5");
FILE *dp;
int i=0,k;
char id[5],pass[11];
char d[5]="psap";
static char s[11]="H9";
dp=fopen("diary.txt","r");
system("cls");
printf("\t\t\t\t\t      ALL DIARIES \n");
if(j==3)
return 0;
printf("\n\tEnter Id : ");
scanf("%s",id);
printf("\n\tPassword : ");
scanf("%s",pass);
printf("\n\n\tchecking password");
for(int i=0;i<3;i++){
sleep(1);
printf(".");}
if(strcmp(id,d)==0&&strcmp(pass,s)==0)
{
printf("\n\n\tcorrect password entered");
sleep(1);
system("cls");
printf("\t\t\t\t\t      ALL DIARIES \n");
char day[20],date[20],name[20],dname1[20],diary[200];
while(fscanf(dp,"%s %s %s %s %s\n",day,date,name,dname1,diary)!=EOF)
{
printf("\n\tDay         : %s",day);
printf("\n\tDate        : %s",date);
printf("\n\tName        : %s",name);
printf("\n\tDiary Title : %s",dname1);
printf("\n\tDiary       : %s\n",diary);
i++;
}
printf("\n\n\n\t%d records found",i);
fclose(dp);}
else
{printf("\n\n\tInvalid id or password");
sleep(1);
j++;
goto start;}
printf("\n\n\n\n\n\n\n\tPress 1 to change password or any other number to continue : ");
scanf("%d",&k);
if(k==1){
system("cls");
printf("\t\t\t\t\t   CHANGE PASSWORD");
printf("\n\n\n\tEnter new password       : ");
scanf("%s",a);
printf("\n\tEnter new password again : ");
scanf("%s",b);
if(strcmp(a,b)==0)
{strcpy(s,a);
printf("\n\n\n\n\n\n\n\tPassword Changed Successfully");}
else{
printf("\n\n\n\n\n\n\n\tPasswords don't match");
printf("\n\n\tError occurred during changing password");}
sleep(1);}
else
return 0;
}
