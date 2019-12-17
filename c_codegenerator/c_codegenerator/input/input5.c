// function returning the max between two numbers 
int max(int num1, int num2) {

   // local variable declaration 
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}

int main(){

	int res;
	res = max(3,5);
	printf("result : %d",res);

	return 0;
}
