/* Problem
Read problem statements in Mandarin, Bengali, Russian, and Vietnamese as well.
Chef will have NN guests in his house today. He wants to serve at least one dish to each of the NN guests. Chef can make two types of dishes. He needs one fruit and one vegetable to make the first type of dish and one vegetable and one fish to make the second type of dish. Now Chef has AA fruits, BB vegetables, and CC fishes in his house. Can he prepare at least NN dishes in total?

Input Format
First line will contain TT, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, four integers N, A, B, CN,A,B,C.
Output Format
For each test case, print "YES" if Chef can prepare at least NN dishes, otherwise print "NO". Print the output without quotes. */

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,a,b,c;
	    scanf("%d%d%d%d",&n,&a,&b,&c);
	    if(b<n)
	    {
	        printf("NO\n");
	    }
	    else
	    {
	        if(a+c>=n)
	        {
	            printf("YES\n");
	        }
	        else
	        {
	            printf("NO\n");
	        }
	    }
	}
	return 0;
}

