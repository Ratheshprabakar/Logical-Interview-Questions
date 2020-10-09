/*32.Given an array, find the minimum of all the greater numbers for each element in the array.
Sample: Array : {2, 3, 7, ­1, 8, 5, 11} Output: {2­>3, 3­>5, 7­>8, ­1­>2, 8­>11, 5­>7, 11­>}*/
#include<stdio.h>
int main()
{
	int n,i,j,*array,max=0;
	static int hash[100];
	printf("Enter the number of elements\t");
	scanf("%d",&n);
	array=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)	
	{
		scanf("%d",&array[i]);
		hash[array[i]]++;
		if(max<array[i])
			max=array[i];
	}
	printf("\n{");
	for(i=0;i<n;i++)
	{
		printf("%d>",array[i]);
		for(j=array[i]+1;j<=max;j++)
		{
			if(hash[j]!=0)
			{
				printf("%d,",j);
				break;
			}
		}

	}
	printf("}");
	free(array);
}

