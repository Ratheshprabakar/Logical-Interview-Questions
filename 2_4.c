 /*Check whether a given mathematical expression is valid.
 Eg.) Input : (a+b)(a*b)
 Output : Valid
 Input : (ab)(ab+)
 Output : Invalid
 Input : ((a+b)
 Output : Invalid */
 #include<stdio.h>
 int main()
 {
 	char string[100];
 	int i;
 	while(1)
 	{
 		int count=0,flag=0;
	 	printf("\nEnter the expression");
	 	scanf("%s",string);
	 	for(i=0;i<strlen(string);i++)
	 	{
	 		if(string[i]=='(')
	 		{
	 			count++;
			 }
			 if(string[i]==')')
			 {
			 	count--;
			 }
			 else if(string[i]=='*' || string[i]=='/' || string[i]=='+' || string[i]=='-')
			 {
			 	if((string[i-1]>='a' && string[i-1]<='z') && (string[i+1]>='a' && string[i+1]<='z'))
			 	{
			 		flag=1;
				 }
				 else
				 {
				 	flag=0;
				 	break;
				 }
			 }
		 }
		 (count==0 && flag==1)?printf("Valid"):printf("Invalid");
		 
	}
 }
