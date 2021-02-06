/*Write a program to sort the elements in odd positions in descending order and elements in
ascending order
Eg 1: Input: 13,2 4,15,12,10,5
 Output: 13,2,12,10,5,15,4
Eg 2: Input: 1,2,3,4,5,6,7,8,9
 Output: 9,2,7,4,5,6,3,8,1 */
 
 #include<stdio.h>
 int main()
 {
 	int n,i,j,l=0,k=0,*arr,*even_arr,*odd_arr,flag=1;
 	printf("Enter the number of elements in the array\t");
 	scanf("%d",&n);
 	arr=(int *)malloc(n* sizeof(int));
 	even_arr=(int *)malloc((n/2)* sizeof(int));
 	odd_arr=(int *)malloc((n/2)* sizeof(int));
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);
 		if(i%2==0)
 		{
 			even_arr[l]=arr[i];
 			l++;

		 }
 		else
 		{
 			odd_arr[k]=arr[i];
 			k++;
		 }
	}
	for(i=l-1;i>=0 && flag;i--)
	{
		flag=0;
		for(j=0;j<i;j++)
		{
			if(even_arr[j]<even_arr[j+1])
			{
				even_arr[j]^=even_arr[j+1];
				even_arr[j+1]=even_arr[j]^even_arr[j+1];
				even_arr[j]^=even_arr[j+1];
				flag=1;
			}
		}
	}	
	flag=1;
	for(i=k-1;i>=0 && flag;i--)
	{
		flag=0;
		for(j=0;j<i;j++)
		{
			if(odd_arr[j]>odd_arr[j+1])
			{
				odd_arr[j]^=odd_arr[j+1];
				odd_arr[j+1]=odd_arr[j]^odd_arr[j+1];
				odd_arr[j]^=odd_arr[j+1];
				flag=1;
			}
		}
	}
	k=0,l=0;
	for(i=0;i<n;i++)
	{
		if(i%2==0)
			printf("%d",even_arr[l++]);
		else
			printf("%d",odd_arr[k++]);
	}
	free(arr);
	free(even_arr);
	free(odd_arr);
 }
