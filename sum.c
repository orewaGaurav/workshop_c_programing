// // C program to add two numbers 
// #include <stdio.h> 

// int main() 
// { 
// 	int A, B, sum = 0; 

// 	// Ask user to enter the two numbers 
// 	printf("Enter two numbers A and B : \n"); 

// 	// Read two numbers from the user || A = 2, B = 3 
// 	scanf("%d%d", &A, &B); 

// 	// Calculate the addition of A and B 
// 	// using '+' operator 
// 	sum = A + B; 

// 	// Print the sum 
// 	printf("Sum of A and B is: %d", sum); 

// 	return 0; 
// }


#include <stdio.h>
int main(){
	int a;
	int b;
	int sum;
	printf("Enter the first no: ");
	scanf("%d",&a);
	printf("Enter the second no: ");
	scanf("%d",&b);
	sum = a+b;
	printf("sum of a and b is: %d\n",sum);
}