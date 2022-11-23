/* Problem
Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce.

We say that a word is hard to pronounce if it contains 44 or more consonants in a row; otherwise it is easy to pronounce. For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.

You are given a string SS consisting of NN lowercase Latin characters. Determine whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.

For the purposes of this problem, the vowels are the characters \{a, e, i, o, u\}{a,e,i,o,u} and the consonants are the other 2121 characters.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a single integer NN, the length of string SS.
The second line of each test case contains the string SS.
Output Format
For each test case, output on a new line the answer — YES if SS is easy to pronounce, and NO otherwise. */

#include <stdio.h>
#include<string.h>
int main(void) 
{
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int count=0,flag=0;
	    int n;
	    scanf("%d",&n);
	    char a[n];
	    scanf("%s",a);
	    for(int i=0;i<n;i++)
	    {
	        if((a[i]=='a' || a[i]=='e') || (a[i]=='i' || a[i]=='o') || a[i]=='u')
	        {
	            count=0;
	        }
	        else
	        {
	            count++;
	            if(count>=4)
	             {
	                printf("NO\n");
	                flag=1;
	                break;
	             }
	        }
	    }
	    if(flag==0)
	    {
	        printf("YES\n");
	    }
	    
	}
	return 0;
}

