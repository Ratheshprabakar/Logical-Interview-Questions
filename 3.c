#include<stdio.h>
int main()
{
	char n[100];
	int digit,i=0,j,number;
	printf("Enter the Number\t");
	scanf("%d",&number);
	printf("Enter the digit\t");
	scanf("%d",&digit);
	while(number>0)
	{
		n[i]=(number%10)+digit;
		i++;
		number/=10;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",n[j]);	
	}
}
