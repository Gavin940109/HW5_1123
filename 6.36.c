#include <stdio.h>

void stringReverse();

int main() {
	printf("請輸入一串字元：");
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
