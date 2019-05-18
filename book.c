#include <stdio.h>
#include "book.h"
#define MAX 50

enum { Register = 1, Allprint, Personalprint, Delete, Exit };

int size = 0;

book pb[MAX];
book *p = pb;

int main(void)
{
	int select;
	printf("PHONEBOOK MANAGEMENT SYSTEM.\n");
	do{
		printf("SELECT MENU : REGISTER ALLPRINT PERSONALPRINT DELETE EXIT\n");
		printf("+-------------------------------------------------------+\n");

		scanf("%d", &select);

		printf("SELECT MENU : %d\n",select);

		switch( select ) {
		case Register : 
			regist( p );
			break; 
		case Allprint : 
			allprint( p );
			break; 
		case Personalprint :
			personalprint( p );
			break; 
		case Delete :
			personalDelete( p );
			break;	
		default :
			break;
		}
	}while( select != 5 );

	return 0;
}
