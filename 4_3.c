/*To output the number in words (0-999)
Input: 234
Output: Two hundred and Thirty Four*/
#include<stdio.h>
int main()
{
	int n,temp,count=0;
	char *one[] = {"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten"};
	char *two[] = {"Twenty","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
	char *three[] = {"","","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninety"};
	
	printf("Enter the Number \t");
	scanf("%d",&n);
	
	if(n==0)
		printf("Zero");
	else if(n>0 && n<11)
		printf("%s ",one[n]);
	else if(n>=11 && n<21)
		printf("%s ",two[n%10]);
	else if(n>=21 && n<=999)
	{
		temp=n;
		while(n>0)
		{
			count++;
			n/=10;
		}
		if(count==2)
		{
			printf("%s ",three[temp/10]);
			printf("%s ",one[temp%10]);
		}
		else if(count==3)
		{
			printf("%s hundred and ",one[temp/100]);
			temp=temp-((temp/100)*100);
			printf("%s ",three[temp/10]);
			printf("%s ",one[temp%10]);
		}
	}
}
