#include"student.h"
void add_student(void)
{
ST *new,*temp=head,*last=head;
new=malloc(sizeof(ST));
if(new==0)
{
printf("Malloc fails...\n");
return ;
}
int num=1;
while(temp)
{
if(temp->rollno==num)
{
num++;
temp=head;
continue;
}
temp=temp->next;
}
new->rollno=num;
new->next=0;
printf("Rollno=%d\n",new->rollno);
printf("Enter Name: ");
scanf("%s",new->name);
do
{
printf("Enter Percentage(0.00 - 100.00): ");
scanf("%f",&new->percentage);
if(new->percentage<0.0f || new->percentage > 100.0f);
printf("Invalid! percentage must be between 0 and 100\n");
}while(new->percentage<0.0f || new->percentage > 100.0f);
if(head==0||head->rollno > new->rollno)
{
new->next=head;
head=new;
}
else
{
while(last->next!=0 && last->next->rollno < new->rollno)
last=last->next;
new->next=last->next;
last->next=new;
}
printf("******************************\n");
printf("Record Added Successfully\n");
printf("******************************\n");
}

