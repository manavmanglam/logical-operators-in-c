#include <stdio.h>
#include <stdbool.h>
int main(){
	int a = 5;
	int b = 0;
	bool c = a && b;
	printf("a: %d\n" , a);
	printf("b: %d\n" , b);
	printf("c (a && b) : %s\n" , c ? "true" : "false"); 
	printf("c (a && b as int): %d\n" , c);
	return 0;
}
