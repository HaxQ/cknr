#include <stdio.h>

int main(void) {
	printf("F\tC\n");
	for(float fahr = 300;fahr >= 0; fahr -= 20) {
		printf("%3.0f\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}
}
