#include <stdio.h>
#include <string.h>
#include "book.h"

void regist( book *s )
{
	char PW_true[] = "qwer1234";
	char PW_in[9];

	s += size;

	int count = 0;
	
	do {
		printf("PassWord Input : ");
		scanf("%s", PW_in);

		if( !strcmp( PW_true, PW_in) ) {

			scanf("%s", s->name);
			scanf("%s", s->TP);

			printf("Register : %s\n", s->name);
			printf("TP : %s\n", s->TP);
			printf("Registration Success\n");
			
			size++;
		}
		else {
			printf("(%d FAIL)", count + 1);
			count++;
		}
		if(size > 0) break;

	}while( count < 3 );

	if( count == 3){
		printf("Registration fail!\n");
		printf("Terminate program\n");
	}
}
