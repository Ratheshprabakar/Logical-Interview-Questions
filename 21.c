/*21. Given a two dimensional array which consists of only 0's and 1's. Print the matrix without duplication.
INPUT : 
Enter Row Size : 4 
Enter column size : 3 
Enter the matrix : 
1 0 1 
1 1 0 
1 1 1 
1 0 1 
OUTPUT : 
Unique Matrix : 
1 0 1 
1 1 0 
1 1 1
*/
#include<stdio.h>
int main()
{
	int array[100][100],i,j,k,count=0,row,column,flag=0,sum=0,index,*decimal;
	printf("Enter Row Size:\t");
	scanf("%d",&row);
	printf("Enter Column Size:\t");
	scanf("%d",&column);
	for(i=0;i<row;i++)
		for(j=0;j<column;j++)
			scanf("%d",&array[i][j]);
	decimal=(int *)calloc(row,sizeof(int));
	for(i=0;i<row;i++)
	{
		k=0,sum=0;		
		for(j=column-1;j>=0;j--)
		{
			sum=sum+(array[i][j]*pow(2,k));
			k++;	
		}
		flag=0;
		for(index=0;index<i;index++)
		{
			if(decimal[index]==sum)
			{
				flag=1;
				decimal[i]=-1;
				break;
			}
		}
		if(flag==0)
			decimal[i]=sum;
	}
	printf("The Unique Matrix\n");
	for(i=0;i<row;i++)
	{
		if(decimal[i]!=-1)
		{
			for(j=0;j<column;j++)
			{
				printf("%d\t",array[i][j]);	
			}
			printf("\n");	
		}	
	}
	free(decimal);	

}
