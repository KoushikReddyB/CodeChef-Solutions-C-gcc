/* Problem
The purpose of this problem is to verify whether the method you are using to read input data is sufficiently fast to handle problems branded with the enormous Input/Output warning. You are expected to be able to process at least 2.5MB of input data per second at runtime.

Input
The input begins with two positive integers n k (n, k<=107). The next n lines of input contain one positive integer ti, not greater than 109, each.

Output
Write a single integer to output, denoting how many integers ti are divisible by k.*/
#include<stdio.h>

int main()
{
	int n,k,ans=0,i;
	scanf("%d %d",&n,&k);
	
	for(i=0;i<n;i++)
	{
		int t;
		scanf("%d",&t);
		if(t%k==0)
		{
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}
