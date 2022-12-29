#include <stdio.h>

int main(void) {
	char c;

	while((c = getchar()) != EOF) {
		//putchar(c);
		printf("%c\t%d\n", c, c);
	}
}
