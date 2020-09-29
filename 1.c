//prime number : print n prime numbers
#include<stdio.h>
int main()
{
	int n,count,i=3,j;
	printf("Enter the N value\t");
	scanf("%d",&n);
	if(n>=1)
		printf("2\n");
	for(count=2;count<=n;)
	{
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
				break;			
		}
		if(i==j)
		{
			printf("%d\n",i);
			count++;
		}	
		i++;
	}
} 

