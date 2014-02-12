#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
	char *base2[]={"00","01","10","11"};
	char *basefour[]={"0","1","2","3"};
	char base4[]={"000000000332"};
	char basetwo[]={"11100000000000000000001010101000001010101010101000000000101010101010101111111101010"},temp[3];
	char *output,*output1,*end,buffer[50];
	long  i,j,j1,k,num,n=0,i1=1;
	k=strlen(base4);
	j1=k/2;
	
	
	j=k*2;
	output=(char *)malloc(j*sizeof(char));	
	//Base 4 to base 2
	for(i=0;i<k;i++)
	{
		num=base4[i]-'0';
		memmove(output+(i*2),base2[num],2);
		puts(output);
		
	}
	puts(output);
} 
