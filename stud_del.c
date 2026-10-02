#include"student.h"
static int delete_by_roll(int rno)
{
ST *del=head,*prev=0;
while(del && del->rollno!=rno)
{
prev=del;
del=del->next;
}
if(del==0)
return 0;
if(prev==0)
head=del->next;
else
prev->next=del->next;
free(del);
return 1;
}

void delete_student(void)
{
if(head==0)
{
printf("*************************************\n");
printf("No Student Record Available To Delete\n");
printf("*************************************\n");
return ;
}
char choice;
printf("--------------------------------\n");
printf("Delete Options:\n");
printf("R/r: Delete By Rollno\n");
printf("N/n: Delete By Name\n");
printf("--------------------------------\n");
printf("Enter Your Choice: ");
scanf(" %c",&choice);
int rno;
if(choice == 'R' || choice == 'r')
{
printf("Enter Roll Number To Delete: ");
scanf("%d",&rno);
if(delete_by_roll(rno))
{
printf("***************************************************\n");
printf("Record With Roll Number %d Deleted Successfully\n",rno);
printf("***************************************************\n");
}
else
{
printf("****************************************\n");
printf("Record With Roll Number %d Not Found\n",rno);
printf("****************************************\n");
}
}

else if(choice == 'N' || choice == 'n')
{
char del_name[20];
printf("Enter Name To Delete: ");
scanf("%s",del_name);
ST *del=head;
int count=0;
printf("Matching Records Are...\n");
printf("--------------------------------\n");
while(del)
{
if(strcmp(del->name,del_name)==0)  
{
printf("%d %s %f\n",del->rollno,del->name,del->percentage);
count++;
}
del=del->next;
}
if(count==0)
{
printf("--------------------------------\n");
printf("No Records Found With Name %s\n",del_name);
printf("--------------------------------\n");
return ;
}
printf("Enter The Rollno Of The Record To Delete: ");
scanf("%d",&rno);
if(delete_by_roll(rno))
{
printf("***************************************************\n");
printf("Record With Roll Number %d Deleted Successfully\n",rno);
printf("***************************************************\n");
}
else
{
printf("****************************************\n");
printf("Record With Roll Number %d Not Found\n",rno);
printf("****************************************\n");
}  
}
else
printf("Invalid Choice\n");
}


void delete_all_students(void)
{
free_all_memory();
printf("******************************************\n");
printf("All Student Records Deleted From Memory\n");
printf("******************************************\n");
}
void free_all_memory(void)
{
ST *del=head,*next;;
while(del)
{
next=del->next;
free(del);
del=next;
}
head=0;
}





 
