/*I/P: N=15
O/P: 1,-2,-3,4,5,6,-7,-8,-9,-10,11,12,13,14,15.*/
#include<stdio.h>
int main()
{
	int n,count=1,i,c;
	scanf("%d",&n);
	for(i=1;i<=n;)
	{
		if(count%2!=0)
		{
			for(c=0;c<count;c++)
			{
				printf("%d,",i);
				i++;	
			}	
			count++;
		}
		else
		{
			for(c=0;c<count;c++)
			{
				printf("-%d,",i);
				i++;
			}
			count++;
		}	
	}
}
