main : book.o register.o all_print.o personal_print.o personal_delete.o
	gcc -o main book.o register.o all_print.o personal_print.o personal_delete.o
book.o : book.c book.h 
	gcc -c book.c
register.o : register.c book.h
	gcc -c register.c
all_print.o : all_print.c book.h
	gcc -c all_print.c
personal_print.o : personal_print.c book.h
	gcc -c personal_print.c
personal_delete.o : personal_delete.c book.h
	gcc -c personal_delete.c
clean :
	rm -r *.o
