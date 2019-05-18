#include <stdio.h>
#include <string.h>
#include "book.h"

void personalprint( book *s ) 
{
	char personal[20];
	int i;

	printf("Search for name :");
	scanf("%s", personal);

	for(i = 0; i < size; i++) {
		if( !strcmp( personal, s->name) ) break;
		else s++;
	}
	if(i == size) printf("No name in book\n");
	else printf("%s %s\n", s->name, s->TP);
}
