#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int  *(comparestr)(const void *a,const void *b)
{
	char **str1=(char **)a;
	char **str2=(char **)b;
	//puts(*str1);  
	//puts(*str2); 
	return strcmp(*str1,*str2);
		
}
main()
{
	char **str,c;
	int i,j,k,n;
	printf("Enter number of strings:");
	scanf("%d",&n);
	str=(char **)malloc(n*sizeof(char *));
	
	scanf("%c" , &c);
	for(i=0;i<n;i++)
	{	
		printf("Enter string %d\n",i);	
		str[i]=(char *)malloc(10*sizeof(char));
		gets(str[i]);
	}
	printf("Before Sorting\n");
	for(i=0;i<n;i++)
		puts(str[i]);
	qsort(str,n,sizeof(str[0]),comparestr);
	printf("After Sorting\n");
	for(i=0;i<n;i++)
		puts(str[i]);
	
}
