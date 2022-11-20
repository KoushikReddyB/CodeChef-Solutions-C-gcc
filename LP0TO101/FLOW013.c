/* Problem
Write a program to check whether a triangle is valid or not, when the three angles of the triangle are the inputs. A triangle is valid if the sum of all the three angles is equal to 180 degrees.

Input
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains three angles A, B and C, of the triangle separated by space.

Output
For each test case, display 'YES' if the triangle is valid, and 'NO', if it is not, in a new line. */

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,total;
	    scanf("%d%d%d",&a,&b,&c);
	    total=a+b+c;
	    if(total==180)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
}

