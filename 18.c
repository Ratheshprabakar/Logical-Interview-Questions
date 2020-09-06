/*18. Print the total number of odd and even digits in the given number.
Input : 1234567
Output : ODD 4  EVEN 3*/
#include<stdio.h>
int main()
{
	int n,odd=0,even=0;
	printf("Enter the Number \t");
	scanf("%d",&n);
	while(n>0)
	{
		(n%2==0)?even++:odd++;
		n/=10;	
	}
	printf("ODD %d EVEN %d",odd,even);
}
