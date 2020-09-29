/*.Given an array of characters print the characters that have n number of occurrences. If a character appears consecutively it is counted as 1 occurrence
Eg: a b a a b c c d e d
Here a has only 2 occurrences*/
#include<stdio.h>
int main()
{
	int i,j;
	char array[50];
	static int hash[100];
	scanf("%s",&array);
	for(i=0;i<strlen(array);i++)
	{
		if(array[i]==array[i+1])
		{
			hash[array[i]-'0']++;
			i++;
		}
		else
		{
			hash[array[i]-'0']++;	
		}
	}
	for(j='a';j<='z';j++)
	{
		if(hash[j-'0']!=0)
			printf("\n%c occurs %d times",j,hash[j-'0']);
	}
}
