#include <stdio.h>
#include<stdbool.h>
bool LogicalOr(int num1, int num2){
	return num1 || num2; //Directly return the ressult of the logical or
}
int main(){
	int a, b;
	bool result;
	printf("Enter the first number (a): ");
	scanf("%d", &a);
	printf("Enter the second number (b): ");
	scanf("%d", &b);
	result = LogicalOr(a, b); // Call the user defined function
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("Result (a || b): %s\n", result ? "true" : "false");
	printf("Result (a || b as int): %d\n", result);
	// using the logical or directly in an if staement (using the function)
	if (LogicalOr(a, b)){
		printf("At least one of the number (a or b) is Logically true (non-zero).\n");
	} else {
		printf("Both number (a and b) are Logically false (0).\n");
	}
	//Demonstrating short circuiting
	int x = 5;
	int y = 0;
	if(x!=0 || x/y > 2){
		printf("This will print because of short circuiting as x is not equal to zero\n");
	}
	else{
		printf("This will not print because of short circuitingas x is equal to zero\n");
	}
	x = 0;
	if(x!=0 || x/y > 2){
		printf("This will give error as both condition needs to be evaluated and divison by zero will ocurr\n");
	}
	else{
		printf("Both condition are false\n");
	}
	return 0; 
}
