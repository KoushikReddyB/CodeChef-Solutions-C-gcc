/* Problem
Write a program that takes in a letterclass ID of a ship and display the equivalent string class description of the given ID. Use the table below.

Class ID	Ship Class
B or b	BattleShip
C or c	Cruiser
D or d	Destroyer
F or f	Frigate
Input
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains a character.

Output
For each test case, display the Ship Class depending on ID, in a new line. */

#include <stdio.h>
int main() 
{
	int a;
	scanf("%d\n",&a);
	for(int i=0;i<a;i++)
	{
	    char c;
	    scanf("%c\n",&c);
	    if(c=='B'||c=='b')
	    {
	        printf("BattleShip\n");
	    }
	    if(c=='C'||c=='c')
	    {
	        printf("Cruiser\n");
	    }
	    if(c=='D'||c=='d')
	    {
	        printf("Destroyer\n");
	    }
	    if(c=='F'||c=='f')
	    {
	        printf("Frigate\n");
	    }
	}
	return 0;
}
