/*44.To find the factors of the numbers given in an array and to sort the numbers in descending order according to the factors present in it.
Input:
Given array : 8, 2, 3, 12, 16
Output:
12, 16, 8, 2, 3
*/
#include<stdio.h>
int main()
{
	int n,*array,*factors,i,j,flag=1,count=0;
	printf("Enter the N value\t");
	scanf("%d",&n);
	array=(int *)malloc(n*sizeof(int));
	factors=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);	
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=1;j<=array[i];j++)
		{
			if(array[i]%j==0)
				count++;	
		}
		factors[i]=count;	
	}
	for(i=n-1;i>=0 && flag;i--)
	{
		flag=0;
		for(j=0;j<i;j++)
		{
			if(factors[j]<factors[j+1])
			{
				factors[j]=factors[j]^factors[j+1];	
				factors[j+1]=factors[j]^factors[j+1];
				factors[j]=factors[j]^factors[j+1];
				array[j]=array[j]^array[j+1];
				array[j+1]=array[j]^array[j+1];
				array[j]=array[j]^array[j+1];
				flag=1;
			}
		}	
	}
	printf("Sorted Array\n");
	for(i=0;i<n;i++)
		printf("%d\t",array[i]);
	free(array);
	free(factors);
}
