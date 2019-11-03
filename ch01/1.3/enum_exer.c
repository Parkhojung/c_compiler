#include <stdio.h>

enum { PLUS, STAR} token;

void main(){
	
	token = PLUS;
	printf("%d", token);

	if( token == PLUS)
		printf("PLUS token\n");
	else
		printf("not PLUS token\n");
}
