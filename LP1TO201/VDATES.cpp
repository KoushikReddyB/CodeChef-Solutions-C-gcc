/* Problem
Read problem statements in Mandarin, Bengali, Russian, and Vietnamese as well.
Chef has taken his first dose of vaccine DD days ago. He may take the second dose no less than LL days and no more than RR days since his first dose.

Determine if Chef is too early, too late, or in the correct range for taking his second dose.

Input Format
First line will contain TT, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, three integers D, L, RD,L,R.
Output Format
For each test case, print a single line containing one string - "Too Early" (without quotes) if it's too early to take the vaccine, "Too Late" (without quotes) if it's too late to take the vaccine, "Take second dose now" (without quotes) if it's the correct time to take the vaccine. */

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
	    scanf("%d%d%d",&a,&b,&c);
	    if(a>=b && a<=c) {
            printf("Take second dose now\n");
	    }
	    else if(a<b) {
	        printf("Too Early\n");
	    }
	    else {
	        printf("Too Late\n");
	    }
	}
	return 0;
}