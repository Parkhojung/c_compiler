#include <stdio.h>

int num;
enum { NUMBER, PLUS, STAR, LP,RP, END} token;


int expression();
int term();
int factor();
void get_token();
int error(int);

int main(){
	printf("main start\n");
	int result;
	get_token();
	result = expression();
	if(token!=END)
		error(3);
	else
		printf("%d \n", result);

}

int expression(){
	printf("expression() start\n");
	int result;
	result = term();
	while( token == PLUS){
		get_token();
		result = result + term();
	}
	return result;
}

int term(){
	printf("term() start\n");

	int result;
	result = factor();
	while(token == STAR){
		get_token();
		result = result*factor();
	}
	return result;
}

int factor(){
	printf("factor() start\n");

	int result;
	if(token==NUMBER){
		result = num;
		get_token();
	}
	else if(token ==LP){
		get_token();
		result = expression();
		if(token==RP)
			get_token();
		else
			error(2);
	}
	else{
		error(1);
	}
	return result;	
}

void get_token(){
	printf("get_token() start\n");

	char ch = getchar();

	while (ch == '\n' || ch == '\t' || ch == ' ')
		ch = getchar();

	if (ch == '+')
		token = PLUS;
	else if (ch =='*')
		token = STAR;
	else if ( (ch - 48 >=0) && (ch-48 <=9) ){
		token = NUMBER;
		num = ch-48;
	}
	else if ( ch=='(')
		token = LP;
	else if ( ch==')')
		token = RP;
	else if ( ch = EOF)
		token = END;
	else
		printf("unknown token is readed");
}

int error(int err_num){
	switch(err_num){
	case 1: printf("error: number or '(' expected\n"); break;
	case 2: printf("error: ')' expected\n");break;
	case 3: printf("error: EOF expected\n");break;
	}
	exit(1);
}
