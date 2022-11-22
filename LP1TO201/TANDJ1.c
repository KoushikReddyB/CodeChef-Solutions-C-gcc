/* Problem
Read problem statements in Bengali, Mandarin Chinese, Russian, and Vietnamese as well.
There is a grid of size 10^5 \times 10^510 
 covered completely in railway tracks. Tom is riding in a train, currently in cell (a, b)(a,b), and Jerry is tied up in a different cell (c, d)(c,d), unable to move. The train has no breaks. It shall move exactly KK steps, and then its fuel will run out and it shall stop. In one step, the train must move to one of its neighboring cells, sharing a side. Tom can’t move without the train, as the grid is covered in tracks. Can Tom reach Jerry’s cell after exactly KK steps?

Note: Tom can go back to the same cell multiple times.

###Input

The first line contains an integer TT, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, five integers a, b, c, d, Ka,b,c,d,K.
###Output For each testcase, output in a single line "YES" if Tom can reach Jerry's cell in exactly KK moves and "NO" if not.

You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical). */


#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,d,k,x=0;
	    scanf("%d %d %d %d %d",&a,&b,&c,&d,&k);
	    if(a>=c)
	    {
	        x=x+a-c;
	    }
	    else
	    {
	        x=x+c-a;
	    }
	    if(b>=d)
	    {
	        x=x+b-d;
	    }
	    else
	    {
	        x=x+d-b;
	    }
	    if(x<=k)
	    {
	        if((k-x)%2==0)
	        {
	            printf("YES\n");
	        }
	        else
	        {
	            printf("NO\n");
	        }
	    }
	    else
	    {
	        printf("NO\n");
	    }
	
	}
	return 0;
}