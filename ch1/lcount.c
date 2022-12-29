#include <stdio.h>

/* count lines in input; 1st version */
int main() {
	long nl;
	char c;

	nl = 0;
	while((c = getchar()) != EOF) {
		if(c == '\n')
			++nl;
	}
	printf("%ld\n", nl);
}
