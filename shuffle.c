#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void swap(char *a,char *b)
{
	char *t;
	*t=*a;
	*a=*b;
	*b=*t;
}
int shuffle(char str[],int i,int j)
{
        //puts(str);	
	int k,l,count,n;
	if( i>j  ){printf("DONOTHING\n"); }
	if(i<j && (i==j ||j==i+1) )
 	{
		printf("DO NOTHING\n");
	}
	else
	{
		
		n=j-i+1;
		count=n/4;
		k=(n/4);
		l=(n/2);
		while(count!=0)
		{
			
			swap(str+k+i,str+l+i);
			k++;l++;
			count--;
		}
		
		shuffle(str,i,((j-i)/2)+i);
	 	shuffle(str,((j-i)/2)+i+1,j);
		
	
	}
}

main()
{
	int i,j;	
	char *str;
        str=(char *)malloc(100*sizeof(char));
	gets(str);
	i=strlen(str)-1;
	
	j=0;
	shuffle(str,j,i);
	puts(str);
}
