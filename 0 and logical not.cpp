#include <stdio.h>
#include <stdbool.h>
int main(){
	int a = 0;
	int b = 6;
	bool result_a, result_b;
	result_a = !a; //Logical NOT of a
	result_b = !b; //Logical NOT of b
	printf("a: %d\n", a);
	printf("NOT a: %d\n", a ? "true" : "false");
	printf("NOT a (as int): %d\n", result_a);
	printf("b: %d\n", b);
	printf("NOT b: %s\n", result_b ? "true" : "false");
	printf("NOT b (as int): %d\n", result_b);
	return 0;
}
