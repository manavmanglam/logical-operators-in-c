#include <stdio.h>
#include <stdbool.h>
bool LogicalAnd(int num1, int num2) {
	return num1 && num2; 
}
int main() {
	int a, b;
	bool result;
	printf("Enter the first nuber (a): ");
	scanf("%d", &a);
	printf("Enter the second number (b): ");
	scanf("%d", &b);
	result = LogicalAnd(a, b);
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("Result (a && b): %s\n", result ? "true" : "false");
	printf("Result (a && b as integer): %d\n", result);
	return 0;
}
