/*27.GIven 2 huge numbers as seperate digits, store them in array
and process them and calculate the sum of 2 numbers and store
the result in an array and print the sum.
Input:
Number of digits:12
9 2 8 1 3 5 6 7 3 1 1 6
Number of digits:9
7 8 4 6 2 1 9 9 7
Output :
9 2 8 9 2 0 2 9 5 1 1 3*/
#include<stdio.h>
int main()
{
	int digit1,digit2,carry=0,i,k,j;
	int *number1,*number2,*result;
	printf("Number of digits:\t");
	scanf("%d",&digit1);
	number1=(int *)calloc(digit1,sizeof(int));
	result=(int *)calloc(digit1,sizeof(int));
	for(i=0;i<digit1;i++)
		scanf("%d",&number1[i]);
	printf("Number of digits in second number\t");
	scanf("%d",&digit2);
	number2=(int *)calloc(digit2,sizeof(int));
	for(i=0;i<digit2;i++)
		scanf("%d",&number2[i]);
	carry=0;
	j=digit1-1;
	k=digit2-1;
	for(i=(digit1>digit2?digit1:digit2)-1;i>=0;i--)
	{
		if(j<0)
		{
			number1[j]=0;
			result[i]=(carry+(number1[j]+number2[k]))%10;
			carry=(carry+(number1[j]+number2[k]))/10;
			k--;
		}
		else if(k<0)
		{
			number2[k]=0;
			result[i]=(carry+(number1[j]+number2[k]))%10;
			carry=(carry+(number1[j]+number2[k]))/10;
			j--;
		}
		else if (k==0 && j==0)
		{
			result[i]=(carry+(number1[j]+number2[k]));	
		}
		else
		{
			result[i]=(carry+(number1[j]+number2[k]))%10;
			carry=(carry+(number1[j]+number2[k]))/10;
			j--;k--;
		}
	}
	printf("The Result\t");
	for(i=0;i<digit1;i++)
		printf("%d\t",result[i]);
	free(number1);
	free(number2);
	free(result);
	
}

