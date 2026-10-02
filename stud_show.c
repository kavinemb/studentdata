#include"student.h"
void show_students(void)
{
if(head==0)
{
printf("******************************\n");
printf("No Student Records Available\n");
printf("******************************\n");
return ;
}
ST *p=head;
printf("******************************************\n");
while(p)
{
printf("Rollno: %d Name: %s Percenatge: %f\n",p->rollno,p->name,p->percentage);
p=p->next;
}
printf("******************************************\n");
}
