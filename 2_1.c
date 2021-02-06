/*
Alternate sorting: Given an array of integers, rearrange the array in such a way that the first
element is first maximum and second element is first minimum.
 Eg.) Input : {1, 2, 3, 4, 5, 6, 7}
 Output : {7, 1, 6, 2, 5, 3, 4} 
 */
 
 #include<stdio.h>
 int main()
 {
 	int n,i,j,*arr;
 	printf("Enter the size of the array\t");
 	scanf("%d",&n);
 	arr=(int *)malloc(n* sizeof(int));
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);
	}
	for(i=0,j=n-1;i<j;i++,j--)
	{
		printf("%d,%d,",arr[j],arr[i]);
	}
	printf("%d",arr[n/2]);
	free(arr);
 	
 }
