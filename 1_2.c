/*Given a set of numbers like <10, 36, 54,89,12> we want to find sum of weights based on the
following conditions
1. 5 if a perfect square
2. 4 if multiple of 4 and divisible by 6
3. 3 if even number

And sort the numbers based on the weight and print it as follows
<10,its_weight>,<36,its weight><89,its weight>
Should display the numbers based on increasing order.
*/
#include<stdio.h>
int main()
{
	int n,*arr,i,*weight,flag=1,j;
	printf("Enter the no. of elements\t");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	weight=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
			weight[i]+=3;
		if(arr[i]%4==0 && arr[i]%6==0)
			weight[i]+=4;
		if(sqrt(arr[i])*sqrt(arr[i])==arr[i])
			weight[i]+=5;
	}
	for(i=n-1;i>=0 && flag;i--)
	{
		flag=0;
		for(j=0;j<i;j++)
		{
			if(weight[j]<weight[j+1])
			{
				weight[j]^=weight[j+1];
				weight[j+1]=weight[j]^weight[j+1];
				weight[j]^=weight[j+1];
				arr[j]^=arr[j+1];
				arr[j+1]=arr[j]^arr[j+1];
				arr[j]^=arr[j+1];
				flag=1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("<%d,%d>,",arr[i],weight[i]);
	}
	free(arr);
	free(weight);
	
}
