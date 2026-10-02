#include"student.h"
ST *head=0;
int main()
{
char choice,exit_op;
while(1)
{
printf("******************************\n");
printf("Menu Base Operations\n");
printf("a/A :Add New Record\n");
printf("d/D :Delete A Record\n");
printf("s/S :Show The List\n");
printf("m/M :Modify A Record\n");
printf("v/v :Save Records\n");
printf("e/E :Exit\n");
printf("t/T :Sort The List\n");
printf("l/L :Delete All Records\n");
printf("r/R :Reverse The Lists\n");
printf("******************************\n");
printf("Enter Your Choice: ");
scanf(" %c",&choice);


switch(choice)
{
case 'a':
case 'A':
	add_student();break;
case 'd':
case 'D':
        delete_student();break;
case 's':
case 'S':
        show_students();break;
case 'm':
case 'M':modify_student();break;
case 'v':
case 'V':save_students();break;
case 'e':
case 'E':
	{
	printf("S/s :Save And Exit\n");
	printf("E/e :Exit Without Saving\n");
	printf("Enter Your Choice:\n");
	scanf(" %c",&exit_op); 
	if(exit_op=='S'||exit_op=='s')
	{
	save_students();
	}
	free_all_memory();
	return 0;
	}
case 't':
case 'T':sort_students();break;
case 'l':
case 'L':delete_all_students();break;
case 'r':
case 'R':reverse_list();break;
default :printf("******************************\n");
         printf("Invalid Choice!\n");
         printf("******************************\n");
}
}
}
	       
                
	





