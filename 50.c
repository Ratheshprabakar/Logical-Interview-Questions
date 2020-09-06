/*50.reverse only the vowels:
I/P:zohomail
O/P:zihamool*/
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
		if(array[i]=='a' || array[i]=='e' || array[i]=='i' || array[i]=='o' || array[i]=='u' || array[i]=='A' || array[i]=='E' || array[i]=='I' || array[i]=='O' || array[i]=='U')
		{
			if(array[j]=='a' || array[j]=='e' || array[j]=='i' || array[j]=='o' || array[j]=='u' || array[i]=='A' || array[i]=='E' || array[i]=='I' || array[i]=='O' || array[i]=='U')
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

