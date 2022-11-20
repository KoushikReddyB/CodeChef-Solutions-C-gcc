/* Problem
Read problems statements in Mandarin Chinese, Russian, Vietnamese, and Bengali as well.
Chef's son Chefu found some matches in the kitchen and he immediately starting playing with them.

The first thing Chefu wanted to do was to calculate the result of his homework — the sum of AA and BB, and write it using matches. Help Chefu and tell him the number of matches needed to write the result.

Digits are formed using matches in the following way: 

Input
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first and only line of each test case contains two space-separated integers AA and BB.
Output
For each test case, print a single line containing one integer — the number of matches needed to write the result (A+B). */


#include<stdio.h>
int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,rem,count=0;
	    scanf("%d%d",&a,&b);
	    c=a+b;
	    while(c>0)
	    {
	        rem=c%10;
	            if(rem==1)
	            {
	                count=count+2;
				}
	            else if(rem==2)
				{
	                count=count+5;
				}
	            else if(rem==3)
	            {
	                count=count+5;
				}
	            else if(rem==4)
	            {
	                count=count+4;
				}
	            else if(rem==5)
	            {
	                count=count+5;
				}
	            else if(rem==6)
	            {
	                count=count+6;
				}
	            else if(rem==7)
	            {
	                count=count+3;
				}
	            else if(rem==8)
	            {
	                count=count+7;
				}
	            else if(rem==9)
	          	{
	                count=count+6;
				}
	            else if(rem==0)
	            {
	                count=count+6;
				}
	            c=c/10;
	   }
	        printf("%d\n",count);
	 

	}
	return 0;
}