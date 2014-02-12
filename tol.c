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
	k=strlen(basetwo);
	j1=k/2;
	output1=(char *)malloc(j1*sizeof(char));	
	for(i=k-1;i>=0;i-=2)
	{
		if(i==0)
		{
			temp[0]=basetwo[i];
			temp[1]='\0';
		}
		else
		{
			temp[0]=basetwo[i-1];
			temp[1]=basetwo[i];
			temp[2]='\0';
		}
		//puts(temp);
		long x = strtol(temp, &end, 2);
		memmove(output1+j1,basefour[x],1);
		j1--;
		//n=n+x*i1;
		//i1=i1*10;
		//printf("%s in base 2 = %ld in base 10\n", temp, x);
		
	}
	puts(output1);
	//printf("%s in base 2 = %ld in base 4\n", temp, n);
	j=k*2;
	output=(char *)malloc(j*sizeof(char));	
	/*Base 4 to base 2
	for(i=0;i<k;i++)
	{
		num=base4[i]-'0';
		memmove(output+(i*2),base2[num],2);
		puts(output);
	}*/
	
} 
