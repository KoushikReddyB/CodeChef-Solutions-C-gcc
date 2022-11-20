/* Problem
Chef wants to reach home as soon as possible. He has two options:

Travel with his BIKE which takes XX minutes.
Travel with his CAR which takes YY minutes.
Which of the two options is faster or do they both take same time?

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains a single line of input, two integers X, YX,Y representing the time taken to travel with BIKE and CAR respectively.
Output Format
For each test case, print CAR if travelling with Car is faster, BIKE if travelling with Bike is faster, SAME if they both take the same time.

You may print each character of CAR, BIKE and SAME in uppercase or lowercase (for example, CAR, Car, cAr will be considered identical). */

#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x<y)
        {
            printf("BIKE\n");
        }
        else if(x==y)
        {
            printf("SAME\n");
        }
        else
        {
            printf("CAR\n");
        }
    }
	return 0;
}
