#include <stdio.h>

int main() {
	int fahr = 0, lower = 0, upper = 300, step = 20;
	
	while (fahr <= upper) {
		printf("%d\t%d\n", fahr, 5 * (fahr - 32) / 9);
		fahr += step;
	}
}
