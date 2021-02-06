/*Given array find maximum sum of contiguous sub array
{-2 -3 4 -1 -2 1 5 -3}
output 7 elements [ 4 -1 -2 1 5]*/
#include<stdio.h>
int main()
{
	int n,*arr,i,max_end,final_max;
	printf("Enter total no of elements\t");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	final_max=0,max_end=0;
	for(i=0;i<n;i++)
	{
		max_end=max_end+arr[i];
		if(max_end<0)
		{
			max_end=0;
		}
		else if(max_end>final_max)
			final_max=max_end;	
	}
	printf("Maximum sum of contiguous sub array \t %d",final_max);
	free(arr);
}
