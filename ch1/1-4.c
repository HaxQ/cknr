#include <stdio.h>

/* print Celsius-Fahrenheit table
    for celsius = -20, 0, ..., 120 */

int main(void) {
	float fahr, celsius;
	int lower, upper, step;

	lower = -40;
	upper = 110;
	step = 12;

	celsius = lower;
	printf("C\tF\n");
	while(celsius <= upper) {
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
