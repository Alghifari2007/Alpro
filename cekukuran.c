#include <stdio.h>

int main(void) {
	printf("--- Ukuran Tipe Data dalam Byte ---\n");
	printf("Ukuran int    : %lu byte\n", sizeof(int));
	printf("Ukuran float  : %lu byte\n", sizeof(float));
	printf("Ukuran double : %lu byte\n", sizeof(double));
	printf("Ukuran char   : %lu byte\n", sizeof(char));

	return 0;
}