//given a set of numbers, and a digit in each iteration, if the digit exists in any of  the numbers, remove its occurrences and ask for the next digit till the list becomes empty.
#include<stdio.h>
int main()
{
	static int hash[100];
	int array[100],i,n,digit;
	printf("\nEnter the N value\t");
	scanf("%d",&n);
	int count=n;
	printf("\nEnter the values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		hash[array[i]]++;	
	}
	while(count!=0)
	{
		printf("\nsEnter the digit\t");
		scanf("%d",&digit);
		if(hash[digit]!=0)
		{
			count=count-hash[digit];
			hash[digit]=0;	
			printf("\nDigit : %d removed successfully",digit);
		}
		else
		{
			printf("\nNo digit found, Please enter the digit\t");
		}
		printf("\n[");
		for(i=0;i<n;i++)
		{
			if(hash[array[i]]!=0)
			{
				printf("%d,",array[i]);
			}	
		}
		printf("]\n");
	}
}
