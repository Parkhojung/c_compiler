int global_a=3;

int main(){

	int local_b;
	
	local_b = global_a;
	printf("global_a : %d\n",global_a);
	printf("local_b : %d\n",local_b);
	return 0;
}
