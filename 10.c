/*10.Print second frequently occurring number in given series 
Example :
Input: 1 1 2 3 1 2 4 Output: 2*/

#include<stdio.h>
int main()
{
	int n,i,j,flag=1,count=0,*array,output[100][2],k=0,element;
	printf("Enter the number of elements in an array\t");
	scanf("%d",&n);
	array=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	for(i=n-1;i>=0 && flag;i--)
	{
		flag=0;
		for(j=0;j<i;j++)
		{
			if(array[j]>array[j+1])
			{
				array[j]^=array[j+1];
				array[j+1]=array[j]^array[j+1];
				array[j]^=array[j+1];
				flag=1;
			}
		}
	}
	k=0,flag=1;
	for(i=0;i<n;i=i+count)
	{
		count=0;
		element=array[i];
		for(j=i;j<n;j++)
		{
			if(array[j]==element)
				count++;
			else
				break;
		}
		output[k][0]=array[i];
		output[k][1]=count;
		k++;
	}
	free(array);
	for(i=k-1;i>=0 && flag;i--)
	{
		flag=0;
		for(j=0;j<i;j++)
		{
			if(output[j][1]<output[j+1][1])
			{
				output[j][0]^=output[j+1][0];
				output[j+1][0]=output[j][0]^output[j+1][0];
				output[j][0]^=output[j+1][0];	
				output[j][1]^=output[j+1][1];
				output[j+1][1]=output[j][1]^output[j+1][1];
				output[j][1]^=output[j+1][1];
				flag=1;
			}
		}
	}
	printf("The Second Frequently occured element is %d",output[1][0]);
}
