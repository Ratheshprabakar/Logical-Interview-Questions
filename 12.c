/*12.Print pattern like this
Example: 
Input: 1
Output: 0 
Input: 2 
Output: 
0 0 
0 1 
1 0 
1 1 
Input: 3 
Output: 
0 0 0 
0 0 1 
0 1 0 
0 1 1 
1 0 0 
1 0 1 
1 1 0 
1 1 1
*/
#include<stdio.h>
int main()
{
	int n,i,temp,*array,k,j;
	printf("Enter the N value\t");
	scanf("%d",&n);	
	array=(int *)calloc(n,sizeof(int));
	if(n==1)
		printf("%d",!n);
	else
	{
		for(i=0;i<n;i++)
			printf("%d\t",!n);
		printf("\n");
		for(i=1;i<pow(2,n);i++)
		{
			temp=i;	
			k=n-1;
			while(temp>0)
			{
				array[k--]=temp%2;
				temp/=2;
			}
			for(j=0;j<n;j++)
				printf("%d\t",array[j]);
			printf("\n");	
		}
	}
	free(array);
}
