/* Problem
Given an Integer N, write a program to reverse it.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the reverse of the given number N, in a new line. */

# include <stdio.h>
#include<math.h>
int main() {
	int a, rem, sum = 0;;
	scanf("%d", &a);
	while (a--) {

		int n;
		scanf("%d", &n);
		while(n!=0) {
			rem = n % 10;
			sum = sum * 10 + rem;
			n = n / 10;
		}
		printf("%d\n", sum);
		sum = 0;

		}
	return 0;

	}
