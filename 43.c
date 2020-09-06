/*43.To find the odd numbers in between the range.
Input:
2
15
Output:
3,5,7,9,11,13*/
#include<stdio.h>
int main()
{
	int start,end,i;
	printf("Enter the start and end range\t");	
	scanf("%d\t%d",&start,&end);
	for(i=start;i<end;i++)
	{
		if(i%2!=0)
			printf("%d\t",i);	
	}
}
