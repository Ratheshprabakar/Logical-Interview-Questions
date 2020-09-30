/*Given sorted array check if two numbers sum in it is a given value
Input
Array = {1 3 4 8 10} N = 7
output
true*/
#include<stdio.h>
int main()
{
	int n,i,sum,number1=0,j;
	int *array;
	printf("Enter the number of elements in an array\t");
	scanf("%d",&n);
	array=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	printf("Enter the sum value\t");
	scanf("%d",&sum);
	for(i=0;i<n;i++)
	{
		number1=abs(sum-array[i]);
		for(j=i;j<n;j++)
		{
			if(array[j]==number1)
			{
				printf("True");	
				exit(1);
			}	
		}	
	}
	if(i==n)
		printf("False");
	free(array);
}
