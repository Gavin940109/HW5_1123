#include <stdio.h>

void stringReverse();

int main() {
	printf("�п�J�@��r���G");
	stringReverse();

	return 0;
}

void stringReverse() {
	char ch = getchar();

	if (ch == '\n') {
		return;
	}
	stringReverse();
	putchar(ch);
}
