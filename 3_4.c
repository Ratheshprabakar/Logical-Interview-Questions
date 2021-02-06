 /*Find if a String2 is substring of String1. If it is, return the index of the first occurrence. else
return -1.
Eg 1:Input:
 String 1: test123string
 String 2: 123
 Output: 4
Eg 2: Input:
 String 1: testing12
 String 2: 1234
 Output: -1
*/
#include<stdio.h>
int main()
{
	char string1[100];
	char string2[100];
	int i,j,flag=0,start=0;
	printf("Enter the string 1");
	scanf("%s",string1);
	printf("\nEnter the string 2");
	scanf("%s",string2);
	for(i=0,j=0;i<strlen(string1) && j<strlen(string2);)
	{
		if(string1[i]==string2[j])
		{
			start=i;
			for(j=j+1;j<strlen(string2);j++)
			{
				i++;
				if (string1[i]==string2[j])
				{
					flag=1;
				}
				else
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
				printf("%d",start);
			else
			{
				printf("-1");
				break;
			}
		}
		else
			i++;
		
	}
}
