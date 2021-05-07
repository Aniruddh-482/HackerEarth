/* Read from STDIN, Write to STDOUT */
/* -------------------------------- */

/* 
Problem
Read different types of data from standard input, process them as shown in output format and print the answer to standard output.

Input format: 
First line contains integer N.
Second line contains string S.

Output format: 
First line should contain N x 2.
Second line should contain the same string S.

Constraints: 
0 <= N <= 10
1 <= |S| <= 15 where S length of string S

Sample Input: 
5
helloworld

Sample Output: 
10
helloworld
*/

/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <stdio.h>

int main(){
	int N;
	char S[15];

	scanf("%d", &N);
	scanf("%s", &S);

	N = 2 * N;

	printf("%d\n", N);
	printf("%s", S);
}

