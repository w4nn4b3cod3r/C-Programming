#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *arr;
	int si;
	scanf("%d", &si);
	arr = (int*) malloc (si * sizeof(int)); 
	printf("Size of the Malloc Array is: %ld\n", sizeof(arr));
	printf("Size of the int is: %ld\n", sizeof(int));
	for(int i = 0; i < si; i++)
	{
		arr[i] = i;
	}
	for(int i = 0; i < si; i++)
	{
		printf("Size of single elements is: %ld -->\t %d --> \t Address is : %p ",
		sizeof(arr[i]), arr[i],&arr[i]);
		printf("\n");
	}
	printf("\n");
	free(arr);
	for(int i = 0; i < si; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\nCleaned up memory successful\n");
	return 0;
}
