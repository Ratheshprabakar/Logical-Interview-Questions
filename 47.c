/*47.Write a program to give the following output for the given input
Eg 1: Input: a1b10 Output: abbbbbbbbbb Eg: 2: Input: b3c6d15 Output: bbbccccccddddddddddddddd The number varies from 1 to 99.*/
#include<stdio.h>
int main()
{
	char array[100];
	int i,j,value=0;
	printf("Enter the input\t");
	scanf("%s",&array);
	for(i=0;i<strlen(array)-1;i=i+2)
	{	
		value=0;
		if((array[i+1]>='0' && array[i+1]<='9') && (array[i+2]>='0' && array[i+2]<='9'))
		{
			value=(array[i+2]-'0') + ((array[i+1]-'0')*10);
			for(j=0;j<value;j++)
			{
			printf("%c",array[i]);	
			}
			i++;
		}
		else
		{
			for(j=0;j<array[i+1]-'0';j++)
			{
				printf("%c",array[i]);	
			}
		}
	}
}

