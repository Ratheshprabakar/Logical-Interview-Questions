//Find the maximum of three numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three numbers\t");
	scanf("%d\t%d\t%d",&a,&b,&c);
	(a>b)?((a>c)?printf("Maximum = %d",a):printf("Maximum = %d",c)):((b>c)?printf("Maximum = %d",b):printf("Maximum = %d",c));
}
