#include <stdio.h>
int main(){
	int a = 5;
	int b = 6;
	int c = a && b;
	printf("a:  %d\n", a);
	printf("b:  %d\n", b);
	printf("c (a && b): %d\n", c);
	return 0;
}
