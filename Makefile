# make file for project
exe:stud_main.o stud_add.o stud_del.o stud_modify.o stud_save.o stud_show.o
	cc stud_main.o stud_add.o stud_del.o stud_modify.o stud_save.o stud_show.o -o exe
stud_main.o:stud_main.c
	cc -c stud_main.c
stud_add.o:stud_add.c
	cc -c stud_add.c
stud_del.o:stud_del.c
	cc -c stud_del.c
stud_modify.o:stud_modify.c
	cc -c stud_modify.c
stud_save.o:stud_save.c
	cc -c stud_save.c
stud_show.o:stud_show.c
	cc -c stud_show.c
clear:
	@echo "cleaning up....."
	@rm -vr *.o
