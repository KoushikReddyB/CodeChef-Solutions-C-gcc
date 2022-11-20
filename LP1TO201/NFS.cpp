/* Problem
Read problem statements in Russian and Mandarin Chinese
Chef is playing Need For Speed. Currently, his car is running on a straight road with a velocity UU metres per second and approaching a 90^{\circ}90 
turn which is SS metres away from him. To successfully cross the turn, velocity of the car when entering the turn must not exceed VV metres per second.

The brakes of Chef's car allow him to slow down with a deceleration (negative acceleration) not exceeding AA metres per squared second. Tell him whether he can cross the turn successfully. The velocity vv when entering the turn can be determined from Newton's 2nd law to be v^2 = U^2 + 2 \cdot a \cdot Sv 
if the car is moving with a uniform acceleration aa.

Input
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first and only line of each test case contains four space-separated integers UU, VV, AA and SS.
Output
For each test case, print a single line containing the string "Yes" if Chef can cross the turn successfully or "No" if he cannot (without quotes).

You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical). */

#include <stdio.h>
#include<math.h>

int main(void) 
{
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    float u,v,a,s;
        float vel,sqr;
        scanf("%f%f%f%f",&u,&vel,&a,&s);
        v=((u*u)-(2*a*s));
        sqr=sqrt(v);
        if(sqr>vel)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
	}
	return 0;
}