/*Given an array of positive integers. The output should be the number of occurrences of each number. 
Example:
Input: {2, 3, 2, 6, 1, 6, 2}
Output:
1 : 1
2 : 3
3 : 1
6 : 2*/
#include<stdio.h>
int main()
{
	int n,*array,i,max=0;
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
	for(i=0;i<=max;i++)
	{
		if(hash[i]!=0)
		{
			printf("\n%d : %d",i,hash[i]);	
		}	
	}
}
