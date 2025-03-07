// C program to print first 6 Fibonacci numbers 
#include <stdio.h> 

// Function to print first 6 Fibonacci Numbers 
void printFibonacciNumbers(int n) 
{ 
	int f1 = 0, f2 = 1, i; 

	if (n < 1) 
		return; 

	for (i = 1; i <= n; i++) 
	{ 
		printf("%d ", f2); 
		int next = f1 + f2; 
		f1 = f2; 
		f2 = next; 
	} 
} 

// Driver Code 
int main() 
{ 
	printFibonacciNumbers(6); 
	return 0; 
} 


