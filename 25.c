/*Write a program to determine whether a given number can be expressed as sum of two prime numbers or not.
For example 34 can be expressed as sum of two prime numbers but 23 cannot be.*/
#include<stdio.h>
int main()
{
	int n,i,j,count=0,flag=0,k,target;
	printf("Enter the number\t");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		flag=0;
		for(j=1;j<i/2;j++)
		{
			if(i%j==0)
				flag=1;	
		}
		if(flag==0)
		{
			count=0;
			target=n-i;
			for(k=1;k<target/2;k++)
			{
				if(target%k==0)
					count++;
			}
			if(count==1)
			{
				printf("True");
				exit(1);
			}	
		}	
	}
	if(i==n)
		printf("False");
}
