/*19.Find the second maximum among the given numbers.
INPUT : Size of Array : 8
Enter the elements : 2 5 1 6 2 6 7 10 OUTPUT : 7
INPUT : Size of Array : 4 
Enter the elements : 4 1 2 2 
OUTPUT : 2
INPUT : Size of Array : 1 
Enter the elements : 1 
OUTPUT : No second maximum*/

#include<stdio.h>
int main()
{
	int n,i,j,flag=1;
	int *array;
	printf("Size of array\t");
	scanf("%d",&n);
	if(n==1)
	{
		printf("\nNo second maximum");
		exit(1);	
	}
	array=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);	
	}
	for(i=n-1; i>=0 && flag;i--)
	{
		flag=0;
		for(j=0;j<i;j++)
		{
			if(array[j]>array[j+1])
			{
				flag=1;
				array[j]=array[j]^array[j+1];
				array[j+1]=array[j]^array[j+1];
				array[j]=array[j]^array[j+1];
			}	
		}
	}
	for(i=n-1;i>=0;i--)
	{
		if(array[i]!=array[i-1])
		{
			printf("\nThe Second Maximum Number is %d",array[i-1]);
			break;
		}
	}
	free(array);
}
