/*Given an array of numbers and a window of size k. Print the maximum of numbers inside the window for each step as the window moves from the beginning of the array.
INPUT : Enter the array size : 8 
Enter the elements : 1,3,5,2,1,8,6,9 
Enter the window size : 3 
OUTPUT : 5 5 5 8 8 9*/
#include<stdio.h>
int main()
{
	int array_size,window_size,i,j,max=0;
	int *array;
	printf("Enter the array size :\t");
	scanf("%d",&array_size);
	array=(int *)malloc(array_size*sizeof(int));
	for(i=0;i<array_size;i++)
		scanf("%d",&array[i]);
	printf("Enter the window size\t");
	scanf("%d",&window_size);
	for(i=0;i<=array_size-window_size;i++)
	{
		max=array[i];
		for(j=i;j<i+window_size;j++)
		{
			if(max<array[j])
				max=array[j];		
		}
		printf("%d\t",max);
	}
	free(array);
}

