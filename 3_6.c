 /*Reverse the string such as
Eg 1: Input: one two three
 Output: three two one
Eg 2: Input: I love india
 Output: india love I */
 #include<stdio.h>
 int main()
 {
 	char input[100];
 	int i,j,count=0;
 	gets(input);
 	for(i=strlen(input)-1;i>=0 ;i--)
 	{
 		count++;
 		if(input[i]==' ')
 		{
 			for(j=i+1;(count--)-1;j++)
 			{
 				printf("%c",input[j]);
			 }
			 printf(" ");
			 count=0;
		 }
	 }
	 for(i=0;input[i]!=' ';i++)
	 {
	 	printf("%c",input[i]);
	 }
 }
