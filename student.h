#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct st
{
int rollno;
char name[20];
float percentage;
struct st *next;
}ST;
extern ST *head;
void add_student(void);
void delete_student(void);
void show_students(void);
void modify_student(void);
void save_students(void);
void load_students(void);
void sort_students(void);
void delete_all_students(void);
void reverse_list(void);
void free_all_memory(void);

