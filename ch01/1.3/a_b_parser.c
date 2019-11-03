#include <stdio.h>

char ch;

void expression_1(){
	if(ch=='a')
		scanf("%c",&ch);
	else if(ch=='b')
		scanf("%c",&ch);
	else
		printf("error");
}

void main(){
	printf("main\n");
	printf("input >>");
	scanf("%c",&ch);
	
	char cccc;
//	scanf("%c",&cccc);

	printf("main's ch: %c %d\n",ch, ch);

	expression_1();
	
	printf("end's ch: %c %d\n",ch,ch);
	if(ch!='\n')
		printf("error");
}
