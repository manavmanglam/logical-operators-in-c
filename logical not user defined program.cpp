#include <stdio.h>
#include <stdbool.h>
bool LogicalNot(int num){
	return !num; // return the logical not of the input
}
int main(){
	int num;
	bool result;
	printf("Enter a number: ");
	scanf("%d", &num);
	result = LogicalNot(num); // call the user defined function
	printf("Number: %d\n", num);
	printf("NOT Number: %s\n", result ? "true" : "false");
	printf("NOT Number (as int): %d\n", result);
	//using the logical not directly in an if statement(using the function)
	if (LogicalNot(num)) {//directly use the funcion in the if condition
} else { 
printf("The number is logically true (non-zero).\n");
}
return 0;
}
