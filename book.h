#define MAX 50

typedef struct book {
	char name[20];
	char TP[20];
}book;

extern int size;
extern book *p;

void regist( book *s );
void allprint( book *s );
void personalprint( book *s );
void personalDelete( book *s );
