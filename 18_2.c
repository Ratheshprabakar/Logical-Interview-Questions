/*Given sorted array check if two numbers sum in it is a given
value
Input
Array = {1 3 4 8 10 } N = 7
output
true*/
#include<stdio.h>
int main()
{
	int size,i,j,*arr,target,n;
	printf("Enter the array size\t");
	scanf("%d",&size);
	arr=(int *)malloc(size*sizeof(int));
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("Enter the target element\t");
	scanf("%d",&target);
	for(i=0;i<size;i++)
	{
		n=abs(target-arr[i]);
		for(j=i+1;j<size;j++)
		{
			if(arr[j]==n)
			{
				printf("True");
				return 0;
			}
		}
	}
	printf("False");
	return 0;
}
