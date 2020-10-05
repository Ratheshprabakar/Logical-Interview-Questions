/*Take a 2 or 3 digit input number, reverse it and add it to the original number until the obtained number is a palindrome or 5 iterations are completed.
Input : n = 32
Output : 55
23 + 32 = 55 which is a palindrome.
Input : 39
Output : 363 which is a palindrome.*/
#include<stdio.h>
int ispalindrome(int n);
int main()
{
	int n,sum=0,temp,i;
	printf("Enter the Number\t");
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
		temp=n,sum=0;
		while(n>0)
		{
			sum=(sum*10)+(n%10);
			n=n/10;
		}
		n=sum+temp;
		if(ispalindrome(n))
		{
			printf("%d - Which is a palindrome",n);
			exit(1);
		}
	}
	if(i==5)
	{
		printf("5 Iterations completed\nPalindromic number not found\t");
	}
}
int ispalindrome(int n)
{
	int t=n,s=0;
	while(n>0)
	{
		s=(s*10)+(n%10);
		n=n/10;
	}
	if(s==t)
		return 1;
	else 
		return 0;
}
