/* Problem
Read problem statements in Mandarin, Bengali, Russian, and Vietnamese as well.
You are given an integer NN. Consider the sequence containing the integers 1, 2, \ldots, N1,2,…,N in increasing order (each exactly once). Find the maximum length of its contiguous subsequence with an even sum.

Input Format
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first and only line of each test case contains a single integer NN.
Output Format
For each test case, print a single line containing one integer --- the maximum length of a contiguous subsequence with even sum. */


#include <stdio.h>

int main(void) 
{
	long int t;
	scanf("%ld",&t);
	while(t--)
    {
	    long int n,sum=0,i;
	    scanf("%ld",&n);
	    for(i=1;i<=n;i++)
        {
	        sum=sum+i;
	    }
	    if(sum%2==0)
        {
	        printf("%ld\n",n);
	    }
	    else
        {
	        n=n-1;
	        printf("%ld\n",n);
	    }
	}
	return 0;
}
