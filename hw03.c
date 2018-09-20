#include <stdio.h>, <stdlib.h>

int main() {

	//1
	int ray_original[10];

	//2
	for(int i = 0; i < 9; i++) {
		ray_original[i] = rand() % 10;
	}
	
	//3
	ray_original[9] = 0;

	//4
	for(int i = 0; i < 9; i++) {
		printf("The value at position %d in array_original is %d \n", i, ray_original[i]);
	}
	printf("\n");

	//5
	int ray_separate[10];

	//6
	for(int i = 0; i < 10; i++) {
		*(ray_separate + 8 - i) = *(ray_original + i);
	}

	//7
	for(int i = 0; i < 9; i++) {
		printf("The value at position %d in array_separate is %d \n", i, ray_separate[i]);

	}

}