/* Problem
Read problems statements in Mandarin Chinese, Russian, Vietnamese, and Bengali as well.
No play and eating all day makes your belly fat. This happened to Chef during the lockdown. His weight before the lockdown was w_1w 
1 kg (measured on the most accurate hospital machine) and after MM months of lockdown, when he measured his weight at home (on a regular scale, which can be inaccurate), he got the result that his weight was 
Scientific research in all growing kids shows that their weights increase by a value between x_1x 
kg (inclusive) per month, but not necessarily the same value each month. Chef assumes that he is a growing kid. Tell him whether his home scale could be giving correct results.

Input
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first and only line of each test case contains five space-separated integers w_1w 

Output
For each test case, print a single line containing the integer 11 if the result shown by the scale can be correct or 00 if it cannot. */

#include <stdio.h>

int main() 
{
    
	int t; 
	scanf("%d",&t);
	while(t--)
    {
	    int a , b , c , d , m;   
	    scanf("%d %d %d %d %d",&a,&b,&c,&d,&m);
	    if ((b-a)>=(c*m) && (b-a)<=(d*m)) 
        {
	        printf("1\n");
	    } 
	    else 
        {
	        printf("0\n");
	    }
    }
	return 0;
}

