/*Given a number, convert it into corresponding alphabet.(Number ranges from 1 to 99)
Input Output 
1         A 
26       Z 
27       AA */
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Input\t");
	scanf("%d",&n);
	if(n>=1 && n<=26)
		printf("%c",'A'+(n-1));
	else
	{
		printf("%c",'A'+(n/26)-1);
		printf("%c",'A'+ (n%26)-1);
	}
}

