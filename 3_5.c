 /*Given two sorted arrays, merge them such that the elements are not repeated
 Eg 1: Input:
 Array 1: 2,4,5,6,7,9,10,13
 Array 2: 2,3,4,5,6,7,8,9,11,15
 Output:
 Merged array: 2,3,4,5,6,7,8,9,10,11,13,15*/
 #include<stdio.h>
 int main()
 {
 	int size1,size2,i,j,k=0,*arr1,*arr2,*merged_array;
 	printf("Enter the size of the array 1\t");
 	scanf("%d",&size1);
 	arr1=(int *)malloc(size1* sizeof(int));
 	for(i=0;i<size1;i++)
 		scanf("%d",&arr1[i]);
 	printf("Enter the size of the array 2\t");
 	scanf("%d",&size2);
 	arr2=(int *)malloc(size2* sizeof(int));
 	merged_array=(int *)malloc((size1+size2) * sizeof(int));
 	for(i=0;i<size2;i++)
 		scanf("%d",&arr2[i]);
	for(i=0,j=0;i!=size1 && j!=size2;)
	{
		if(arr1[i]==arr2[j])
		{
		 merged_array[k++]=arr1[i];
		 i++;
		 j++;
		 }
		else if(arr1[i]<arr2[j])
		{
			merged_array[k++]=arr1[i];
			i++;
		}
		else
		{
			merged_array[k++]=arr2[j];
			j++;
		}
	 }
	 if(i==size1 && j!=size2)
	 {
	 	for(j;j<size2;j++)
	 	{
	 		merged_array[k++]=arr2[j];
		 }
	 }
	else if(i!=size1 && j==size2)
	 {
	 	for(i;i<size1;i++)
	 	{
	 		merged_array[k++]=arr1[i];
		 }
	 }
	 printf("The Merged Array is \n");
	for(i=0;i<k;i++)
 	{
 		printf("%d,",merged_array[i]);
	 }
	 free(arr1);
	 free(arr2);
	 free(merged_array);
 }
