#include <stdio.h>

extern int rust_add(int a, int b);

int main() {
	printf("%d\n", rust_add(3, 4));
}
