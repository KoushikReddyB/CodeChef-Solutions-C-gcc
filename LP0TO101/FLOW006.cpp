/* Problem
You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input
The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, calculate the sum of digits of N, and display it in a new line. */

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while (t--){
	    int n,m,sum=0;
	    scanf ("%d",&n);
	    while(n>0){
	        
	        m=n%10;
	        n=n/10;
	    
	        sum=sum+m;
	    }
	        printf("%d\n",sum);
	    }
	    return 0;
	}
