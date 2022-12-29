#include <stdio.h>

/* count lines in input; 1st version */
int main() {
	long nb, nt, nl;
	char c;

	nl = 0;
	nb = 0;
	nt = 0;
	while((c = getchar()) != EOF) {
		if(c == '\n')
			++nl;
		if(c == ' ')
			++nb;
		if(c == '\t')
			++nt;
	}
	printf("Newlines: %ld Blanks: %ld Tabs: %ld\n", nl, nb, nt);
}
