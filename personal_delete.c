#include <stdio.h>
#include <string.h>
#include "book.h"

void personalDelete ( book *s ) 
{
	char personal[20];
	int i,j;

	printf("NAME TO REMOVE : ");

	scanf("%s",personal);

	for(i = 0; i < size; i++) {
		if( !strcmp( personal, s->name ) ) {
			for(j = i; j < size - 1; j++) {
				strcpy( s->name, (s+1)->name);
				strcpy( s->TP, (s+1)->TP);
				s++;
			}

			strcpy(s->name,"");
			strcpy(s->TP,""); 

			printf("%s information is deleted.\n", personal);

			size -= 1;
			break;
		}
		s++;
	}
}
		


