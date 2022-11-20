/* Problem
Read problem statements in Mandarin, Bengali, Russian, and Vietnamese as well.
Chef is a software developer, so he has to switch between different languages sometimes. Each programming language has some features, which are represented by integers here.

Currently, Chef has to use a language with two given features AA and BB. He has two options --- switching to a language with two features A_1A 

​
 . All four features of these two languages are pairwise distinct.

Tell Chef whether he can use the first language, the second language or neither of these languages (if no single language has all the required features).

 Input Format
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first and only line of each test case contains six space-separated integers A, B, A_1, B_1, A_2, B_2A,B,A 

Output Format
For each test case, print a single line containing the integer 11 if Chef should switch to the first language, or 22 if Chef should switch to the second language, or 00 if Chef cannot switch to either language.*/ 


#include <stdio.h>

int main(void) 
{
    //your code here
    int n,a,b,c,d,e,f,g,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
        if((a==c && b==d) || (a==d && b==c) )
        {
            printf("1\n");
        }
        else if((a==e && b==f) || (a==f && b==e))
        {
            printf("2\n");
        }
        else
        {
            printf("0\n");
        }
    }
	return 0;
}

