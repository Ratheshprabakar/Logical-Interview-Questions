/*33.Given a string, we have to reverse the string without changing the position of punctuations and spaces.
I/P: house no : 123@ cbe
Output: ebc32 1o : nes@ uoh*/
#include<stdio.h>
int main()
{
	char input[100];
	int i,j;
	printf("Enter the string\t");
	gets(input);
	for(i=0,j=strlen(input)-1;i<j;)
	{
		if(((input[i]>='0' && input[i]<='9')||(input[i]>='a' && input[i]<='z')) && ((input[j]>='0' && input[j]<='9') || (input[j]>='a' &&  input[j]<='z')))
		{
			input[i]=input[i]^input[j];
			input[j]=input[i]^input[j];
			input[i]=input[i]^input[j];
			i++,j--;	
		}
		else if(((input[i]>='0' && input[i]<='9')||(input[i]>='a' && input[i]<='z')) && (!(input[j]>='0' && input[j]<='9') || !(input[j]>='a' &&  input[j]<='z')))
			j--;	
		else if((!(input[i]>='0' && input[i]<='9')||!(input[i]>='a' && input[i]<='z')) && ((input[j]>='0' && input[j]<='9') || (input[j]>='a' &&  input[j]<='z')))
			i++;
	}
	printf("Output\n");
	printf("%s",input);
}
