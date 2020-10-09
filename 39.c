/*39.Given two numbers a and b both < 200 we have to find the square numbers which lie between a and b(inclusive)

eg) i/p a = 20;b = 100;
o/p : 25,36,49,64,81,100*/
#include<stdio.h>
int main()
{
	int start,end,i;
	printf("Enter the start and end range\t");
	scanf("%d\t%d",&start,&end);
	for(i=sqrt(start)+1;i<=sqrt(end);i++)
	{
		printf("%d\t",i*i);
	}
}
