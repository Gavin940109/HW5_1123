#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define TIMES 36000

int add(int a, int b) {
	
	return a + b;
}

int rollDie() {
	return add(rand() % 6, 1);
}

int main() {
	srand((unsigned)time(NULL));

	int count[13] = { 0 };

	for (int i = 0; i < TIMES; i++) {
		int sum = add(rollDie(), rollDie());
		count[sum]++;
	}

	printf("Sum\tTimes\tProbability\n");
	for (int i = 2; i < 13; i++) {
		printf("%d\t%d\t%.3f\n", i, count[i], (float)count[i] / TIMES);
	}

	return 0;
}