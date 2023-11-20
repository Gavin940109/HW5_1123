#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int recursiveMaximum(int *aa,int size) {
	if (size == 1) return aa[0];

	if (recursiveMaximum(aa, size - 1) > aa[size-1]) {
		return recursiveMaximum(aa, size - 1);
	}
	else {
		return aa[size-1];
	}
}
int main() {
	srand((unsigned)time(NULL));
	int a[10];
	for (int i = 0; i < 9; i++) {
		a[i] = rand() % 200;
	}
	printf("number¡G");
	for (int i = 0; i < 9; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");

	printf("The maximum of number¡G");
	printf("%d", recursiveMaximum(a, 10));
}