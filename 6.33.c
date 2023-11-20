#include<stdio.h>
#include<stdlib.h>

int result, n,target;

int binarySearch(int a[], int low, int high, int target) {
	while (low <= high) {
		int mid = low + (high - low) / 2;

		if (a[mid] == target)
			return mid;

		else if (a[mid] > target)
			high = mid - 1;

		else
			low = mid + 1;
	}

	return -1;
}

int cmp(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}

int main() {

	int a[10] = { 8,76,43,54,32,52,23,12,98,1 };
	qsort(a, 10, sizeof(int), cmp);
	n = sizeof(a) / sizeof(a[0]);
	target = 1;

	result = binarySearch(a, 0, n-1, target);

	if (result == -1)
		printf("目標值 %d 未找到。\n", target);
	else
		printf("目標值 %d 在陣列中的索引為 %d。\n", target, result);

}