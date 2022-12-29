#include <stdio.h>

#define		LOWER	0		// lower limit
#define		UPPER	300		// upper limit
#define		STEP	20		// step size

int main(void) {
	printf("F\tC\n");
	for(float fahr = LOWER;fahr <= UPPER; fahr += STEP) {
		printf("%3.0f\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}
}
