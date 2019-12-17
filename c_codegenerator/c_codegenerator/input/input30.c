int main(){

	int *b;
	int c;
	
	b = &c;
	c = 3;
	printf("c address : %d\n ", &c);
	printf("b value : %d\n", b);

	return 0;
}
