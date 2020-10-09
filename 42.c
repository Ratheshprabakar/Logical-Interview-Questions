/*42.Given two sorted arrays output a merged array without duplicates.
Array1: [1, 2, 3, 6, 9]
Array2: [2, 4, 5, 10]
Merged Array: [1, 2, 3, 4, 5, 6, 9, 10]*/
#include<stdio.h>
int main()
{
	int size1,size2;
	printf("Enter the number of elements in the second array\t");
	scanf("%d",&size1);	
	printf("Enter the number of elements in the second array\t");
	scanf("%d",&size2);
	array1=(int *)malloc(size1*sizeof(int));	
	array2=(int *)malloc(size2*sizeof(int));
	for(i=0;i<size1;i++)
		scanf("%d",array1[i]);
	for(j=0;j<size2;j++)
		scanf("%d",array2[i]);
	
}
