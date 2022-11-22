/* Problem
Read problems statements in Hindi, Mandarin Chinese, Russian, Vietnamese, and Bengali as well.
You are given a range of integers \{L, L+1, \ldots, R\}{L,L+1,…,R}. An integer XX is said to be reachable if it can be represented as a sum of two not necessarily distinct integers in this range. Find the number of distinct reachable integers.

Input
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first and only line of each test case contains two space-separated integers LL and RR.
Output
For each test case, print a single line containing one integer — the number of reachable integers. */

#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
    {
	    int l,res,s;
	    scanf("%d%d",&l,&res);
	    s=res-l+1;
	     printf("%d\n",(s*2-1));
	}
	return 0;
}