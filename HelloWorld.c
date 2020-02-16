#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *arr;
	int si;
	scanf("%d", &si);
	arr = (int*) malloc (si * sizeof(int)); 
	for(int i = 0; i < si; i++)
	{
		arr[i] = i;
	}
	for(int i = 0; i < si; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	free(arr);
	printf("Cleaned Heap Memory\n");
	return 0;
}