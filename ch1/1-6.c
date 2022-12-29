#include <stdio.h>

int main(void) {
	char c;

	while(c = getchar() != EOF) {
		printf("In the loop %d\n", c);
	}

	printf("Out of the loop %d\n", c);
}
