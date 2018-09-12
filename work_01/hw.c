#include <stdio.h>

int one() {
	//Multiples of 3 and 5
	return 3 * 5;
}

int five() {
	//Smallest multiple of numbers 1 through 20
	return 2 * 2 * 2 * 2 * 3 * 3 * 5 * 7 * 11 * 13 * 17 * 19;
}

int six() {
	//Difference between sum of squares/square of sum for first 100 natural numbers
	int sum_square = 0;
	int square_sum = 0;
	int i;
	for(i = 1; i <= 100; i++) {
		sum_square += i * i;
		square_sum += i;
	}
	square_sum *= square_sum;
	return -1 * (sum_square - square_sum);
}

int main() {
	printf("The answers to the problems are... One: %d, Five: %d, Six: %d\n", one(), five(), six());
	return 0;
}
	
	