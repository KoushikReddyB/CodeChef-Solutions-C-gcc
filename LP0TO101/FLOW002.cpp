/* Problem
Write a program to find the remainder when an integer A is divided by an integer B.

Input
The first line contains an integer T, the total number of test cases. Then T lines follow, each line contains two Integers A and B.

Output
For each test case, find the remainder when A is divided by B, and display it in a new line. */

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a, b,r;
		scanf("%d",&a);
		scanf("%d",&b);
		
		r=a%b;
		printf("%d",r);
		printf("\n");
		
	}
	return 0;
}

