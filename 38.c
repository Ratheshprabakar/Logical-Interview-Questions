/*38.Youre given a number n. If write all the numbers from 1 to n in a paper, we have to find the number of characters written on the paper.For example if n=13, the output should be 17 if n = 101, the output should be 195*/
#include<stdio.h>
int main()
{
	int n,count=0,i,number;
	printf("Enter the Number\t");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		n=i;
		while(n>0)
		{
			count++;
			n/=10;	
		}
	}
	printf("%d",count);
}
