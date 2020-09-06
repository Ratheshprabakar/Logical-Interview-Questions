#include<stdio.h>
int check(int x);
int main()
{
	int *input_array;
	int n,i,c;
	printf("Enter No of elements\t");
	scanf("%d",&n);
	input_array=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&input_array[i]);	
	}
	for(i=0;i<n;i++)
	{
		c=check(input_array[i]);
		if(c==1)
		{
			printf("%d",input_array[i]);	
		}	
	}
}
int check(int x)
{
	int a=0;
	int b=1;
	if(x==a || x==b)
		return 1;
	int c=a+b;
	while(c<x)
	{
		if(c==x)
			return 1;
		a=b;
		b=c;
		c=a+b;	
	}
	return 0;	
}
