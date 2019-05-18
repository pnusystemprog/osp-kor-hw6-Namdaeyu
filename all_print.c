#include <stdio.h>
#include "book.h"

void allprint( book *s )
{
	int i;

	printf("Register book info :\n");
	
	for(i = 0; i < size; i++)
	{
		printf("%s  %s\n", s->name, s->TP);
		s++;
	}
}
