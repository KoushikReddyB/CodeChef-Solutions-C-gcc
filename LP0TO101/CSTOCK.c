/* Problem
Chef wants to buy a stock whose price was SS rupees when the market opened. He will buy the stock if and only if its price is in the range [A, B][A,B]. The price of the stock has changed by C\%C% by the time he was trying to buy the stock. Will he be able to buy the stock?

Input Format
First line of the input contains TT, the number of testcases. Then the test cases follow.
Each test case contains 44 space-separated integers S, A, B, CS,A,B,C in a single line.
Output Format
For each test case, if Chef buys the stock print YES, otherwise print NO.

You may print each character of the string in uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will all be treated as identical). */


#include <stdio.h>

int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
    {
	    float s, a, b, c;
	    scanf("%f %f %f %f", &s, &a, &b, &c);
	    s=s+(c*s)/100;
	    if(s<a||s>b){
	        printf("NO\n");
	    }
	    else
        {
	        printf("YES\n");
	    }
	}
	return 0;
}