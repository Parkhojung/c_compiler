union {int a; float b;} myvar;

int main(){

	myvar.a = 3;
	myvar.b = 3.5;	
	printf("myvar: %f\n",myvar);
}

