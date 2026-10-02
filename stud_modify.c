#include"student.h"
void modify_student(void)
{
if(head==0)
{
printf("No Records Available To Modify\n");
return ;
}
char op;
printf("-----------------------------\n");
printf("Modify Search Optionss:\n");
printf("R/r:Search By Roll Number\n");
printf("N/n:Search By Name\n");
printf("P/p:Search By Pecrcenatge\n");
printf("-----------------------------\n");
printf("Enter Your Choice: ");
scanf(" %c",&op);
int rno=0;
ST *mod=head;
if(op=='r' || op=='R')
{
printf("Enetr Roll Number To Modify: ");
scanf("%d",&rno);
}
else if(op=='n' || op=='N')
{
char search_name[20];
printf("Enter Name To Search: ");
scanf("%s",search_name);
int count=0;
printf("-------------------------------\n");
while(mod)
{
if(strcmp(mod->name,search_name)==0)
{
printf("%d %s %f\n",mod->rollno,mod->name,mod->percentage);
count++;
}
mod=mod->next;
}
printf("-------------------------------\n");
if(count==0)
{
printf("No Records Found With Name %s\n",search_name);
return ;
}
printf("Enter The Roll Number To Modify: "); 
scanf("%d",&rno);
}
else if(op=='p' || op=='P')
{
float search_p;
printf("Enter Percentage To Search: ");
scanf("%f",&search_p);
int count=0;
printf("-------------------------------\n");
while(mod)
{
if(mod->percentage==search_p)
{
printf("%d %s %f\n",mod->rollno,mod->name,mod->percentage);
count++;
}
mod=mod->next;
}
printf("-------------------------------\n");
if(count==0)
{
printf("No Records Found With Percentage %f\n",search_p);
return ;
}
printf("Enter The Roll Number To Modify: "); 
scanf("%d",&rno);
}
else
{
printf("Invalid Option\n");
return ;
}
mod=head;
while(mod!=0 && mod->rollno!=rno)
mod=mod->next;
if(mod==0)
{
printf("Record With %d Is Not Found\n",rno);
return ;
}
printf("Enter New Name: ");
scanf("%s",mod->name);
do{
printf("Enter New Percentage(0.00 - 100.00): ");
scanf("%f",&mod->percentage);
if(mod->percentage<0.0f || mod->percentage>100.0f)
{
printf("Invalid! Percentage Must Be Between 0 and 100\n");
}
}while(mod->percentage<0.0f ||mod->percentage>100.0f);
printf("Record Updated Successfully!\n");
}
void reverse_list(void)
{
if(head==0||head->next==0)
{
printf("Nothing is There To Revesre\n");
return ;
}
ST *prev;
ST *pres=head;
ST *next;
while(pres)
{
next=pres->next;
pres->next=prev;
prev=pres;
pres=next;
}
head=prev;
printf("List Reversed Successfully!\n");
}
void sort_students(void)
{
if(head==0||head->next==0)
{
printf("Nothing To Sort\n");
return ;
}
char choice;
printf("-------------------------------\n");
printf("Sort Options:\n");
printf("N/n: Sort By Name\n");
printf("P/p: Sort By Percentage\n");
printf("Enter Your Choice: ");
scanf(" %c",&choice);
printf("-------------------------------\n");
if(choice!='n'&&choice!='N'&&choice!='P'&&choice!='p')
{
printf("Invalid Choice\n");
return ;
}
ST *i,*j;
for(i=head;i->next;i=i->next)
{
for(j=i->next;j;j=j->next)
{
int f=0;
if((choice=='n'||choice=='N')&&strcmp(i->name,j->name)>0)
f=1;
if((choice=='p'||choice=='P')&&i->percentage<j->percentage)
f=1;
if(f)
{
int temp_rno=i->rollno;
char temp_name[20];
strcpy(temp_name,i->name);
float temp_p=i->percentage;
i->rollno=j->rollno;
strcpy(i->name,j->name);
i->percentage=j->percentage;

j->rollno=temp_rno;
strcpy(j->name,temp_name);
j->percentage=temp_p;
}
}
}
printf("*************************************\n");
printf("Records Are Sorted Successfully\n");
printf("*************************************\n");
}
























