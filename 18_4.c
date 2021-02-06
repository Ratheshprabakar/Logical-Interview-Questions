/*Write function to find multipication of 2 numbers using +
operator You must use minimu possible iterations.
Input: 3 , 4
Output 12 */
#include<stdio.h>
int main()
{
	int n1,n2,product=0,i,j;
	printf("Enter two numbers\t");
	scanf("%d %d",&n1,&n2);
	(n1<n2)?(i=n1,j=n2):(i=n2,j=n1);
	for(i;i--;)
	{
		product+=j;
	}
	printf("Product of two numbers %d and %d are %d",n1,n2,product);
	return 0;
}
