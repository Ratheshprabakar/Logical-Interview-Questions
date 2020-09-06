//Anagram
#include<stdio.h>
int main()
{
	char string1[100];
	char string2[100];
	char temp;
	int flag=1;
	int i,j;
	printf("Enter the first string\t");
	scanf("%s",string1);
	printf("Enter the second string\t");
	scanf("%s",string2);
	for(i=strlen(string1)-1;i>=0 && flag; i--)
	{
		flag=0;
		for(j=0;j<=i;j++)
		{
			if(string1[j]>string1[j])
			{
				temp=string1[j];
				string1[j]=string1[j+1];
				string1[j+1]=temp;
				flag=1;	
			}		
		}
	}
	printf("%s",string1);
	flag=1;
	for(i=strlen(string2)-1;i>=0 && flag; i--)
	{
		flag=0;
		for(j=0;j<=i;j++)
		{
			if(string2[j]>string2[j])
			{
				temp=string2[j];
				string2[j]=string2[j+1];
				string2[j+1]=temp;
				flag=1;	
			}		
		}
	}
	printf("%s",string2);
	(!strcmp(string1,string2))?printf("Anagram"):printf("Not an Anagram");
}
