#include <stdio.h>

int main(){

	int num1 = 3;
	int num2 = 1;
	int num3 = 5;
	// printf("Addition of %d + %d is %d\n",num1,num2,num1+num2);
	// printf("Subtraction of %d -  %d is %d\n",num1,num2,num1-num2);
	// printf("Multiplication of %d * %d is %d\n",num1,num2,num1*num2);
	// printf("Division of %d / %d is %d\n",num1,num2,num1/num2);
	// printf("Modulus of %d %% %d is %d\n",num1,num2,num1%num2);

	// num1 < num2  ? printf("num2 is greater\n ") : printf("num1 is greater\n ");


	// num1 < num2 ? num2 <num3 ? printf("num3 is greater") : printf("num2 is greaer ") : num1 <num3 ? printf("num3 is greater ") : printf("num 1 is greater");
	
	int temp ;

	printf("Before swap => %d and %d\n", num1,num2);

	// by using temporary variable
	// temp = num1;
	// num1 = num2;
	// num2 = temp;


	// without using temporary variable
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	printf("After swap => %d and %d\n", num1,num2);


	char a = 65;
	a = a + 32;
	printf("%c\n",a);
	return 0;
}




