/*.Given an array of characters print the characters that have n number of occurrences. If a character appears consecutively it is counted as 1 occurrence
Eg: a b a a b c c d e d
Here a has only 2 occurrences*/
#include<stdio.h>
int main()
{
	int i,j;
	char array[50];
	static int hash[27];
	scanf("%s",&array);
	for(i=0;i<strlen(array);i++)
	{
		if(array[i]==array[i+1])
		{
			hash[array[i]-'a']++;
			i++;
		}
		else
		{
			hash[array[i]-'a']++;	
		}
	}
	for(j='a';j<='z';j++)
	{
		if(hash[j-'a']!=0)
			printf("\n%c occurs %d times",j,hash[j-'a']);
	}
}
