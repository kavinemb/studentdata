#include"student.h"
void save_students(void)
{
if(head==0)
{
printf("No Student Records To Save\n");
return ;
}
FILE *fp=fopen("student.dat","w");
if(fp==0)
{
printf("Error Opening File For Writing!\n");
return ;
}
ST *save=head;
int count=0;
while(save)
{
count++;
fprintf(fp,"%d %s %f\n",save->rollno,save->name,save->percentage);
save=save->next;
}
fclose(fp);
printf("*************************************************\n");
printf("Successfully Save %d Records To student.dat\n",count);
printf("*************************************************\n");
}
void load_students(void)
{
FILE *fp=fopen("stuent.dat","r");
if(fp==0)
{
printf("File Does Not Exist\n");
return ;
}
int rno;
char l_name[20];
float p;
while(fscanf(fp,"%d %s %f",&rno,l_name,&p)==3)
{
ST *load=malloc(sizeof(ST));
if(load==0)
break;
load->rollno=rno;
strcpy(load->name,l_name);
load->percentage=p;
load->next=0;
if(head==0)
head=load;
else
{
ST *last=head;
while(last->next)
last=last->next;
last->next=load;
}
}
fclose(fp);
}








