/* Problem
If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.

Input
The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the sum of first and last digits of N in a new line. */

#include <stdio.h>

int main()
{
    int ld,n,t,r;
    
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        ld = n%10;
        while(n>0) 
        {
            r=n%10; 
            n/=10;
        }
        printf("%d\n",r+ld);
    }
    return 0;
}


