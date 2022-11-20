/* Problem
Read problem statements in Mandarin, Bengali, Russian, and Vietnamese as well.
Chef has three spells. Their powers are AA, BB, and CC respectively. Initially, Chef has 00 hit points, and if he uses a spell with power PP, then his number of hit points increases by PP.

Before going to sleep, Chef wants to use exactly two spells out of these three. Find the maximum number of hit points Chef can have after using the spells.

Input Format
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first and only line of each test case contains three space-separated integers AA, BB, and CC.
Output Format
For each test case, print a single line containing one integer — the maximum number of hit points. */

#include <stdio.h>

int main(void) {
	 int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,x,y,z;
        scanf("%d%d%d",&a,&b,&c);
        x=a+b;
        y=b+c;
        z=a+c;
        if(x>=y && x>=z)
        printf("%d\n",x);
        else if(y>=x && y>=z)
        printf("%d\n",y);
        else
        printf("%d\n",z);
    }

	return 0;
}