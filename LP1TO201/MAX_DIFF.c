/* Problem
Chef prepared two dishes yesterday. Chef had assigned the \textbf{tastiness}tastiness 
​
  to the first and to the second dish respectively. The tastiness of the dishes can be any \textbf{integer}integer between 00 and NN (both inclusive).

Unfortunately, Chef has forgotten the values of 
​
  that he had assigned to the dishes. However, he remembers the sum of the tastiness of both the dishes - denoted by SS.

Chef wonders, what can be the maximum possible absolute difference between the tastiness of the two dishes. Can you help the Chef in finding the maximum absolute difference?


Input Format
The first line of input contains a single integer TT, denoting the number of testcases. The description of the TT testcases follows.
The first and only line of each test case contains two space-separated integers NN, SS, denoting the maximum tastiness and the sum of tastiness of the two dishes, respectively.
Output Format
For each testcase, output a single line containing the maximum absolute difference between the tastiness of the two dishes. */

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,s;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d ",&n,&s);
	    if(s<=n)
	    {
	        printf("%d\n",s);
	    }
	    
	    else
	    {
	        printf("%d\n",(n-s)+n);
	    }
	}
	return 0;
}

