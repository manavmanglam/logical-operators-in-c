#include <stdio.h>
#include <stdbool.h>
int main(){
	int a = 5;
	int b = 6;
	bool result_a, result_b;
	result_a = !a; //logical not of a
	result_b = !b; //logical not of b
	printf("a: %d\n", a);
	printf("NOT a: %s\n", result_a ? "true" : "false");
	printf("NOT a (as int): %d\n" , result_a);
	printf("b: %d\n", b);
	printf("NOT b: %s\n", result_b ? "true" : "false");
	printf("NOT b (as int): %d\n", result_b);
	return 0;
}
