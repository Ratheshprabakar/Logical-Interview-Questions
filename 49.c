/*49.Reverse only the characters:
I/P:ZOHO123
O/P:OHOZ123*/
#include<stdio.h>
int main()
{
	char array[20];
	char temp;
	int i,j;
	printf("Enter the string\t");
	scanf("%s",&array);
	j=strlen(array)-1;
	for(i=0;j>i;)
	{
		if(array[i]>=65 && array[i]<=90)
		{
			if(array[j]>=65 && array[j]<=90)
			{
				array[i]=array[i]^array[j];
				array[j]=array[i]^array[j];
				array[i]=array[i]^array[j];
				j--;
				i++;
			}
			else
				j--;	
		}
		else
			i++;	
	}
	printf("%s",array);
}
