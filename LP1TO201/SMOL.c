/* Problem
Read problem statements in Bengali, Mandarin Chinese, Russian, and Vietnamese as well.
You are given two integers NN and KK. You may perform the following operation any number of times (including zero): change NN to N-KN−K, i.e. subtract KK from NN. Find the smallest non-negative integer value of NN you can obtain this way.

Input
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first and only line of each test case contains two space-separated integers NN and KK.
Output
For each test case, print a single line containing one integer — the smallest value you can get. */

#include <stdio.h>
int main(void) {
	long long int N,i,j,x,k,p;
	scanf("%lld", &N);
    for(i=1;i<=N;i++)
	{ 
	   scanf("%lld %lld", &x,&k);
	   if(x<k || k==0)printf("%lld\n",x);
	   else if(x==k)printf("%lld\n", 0);
	   else printf("%lld\n", x%k);
	}
}