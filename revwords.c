#include<stdio.h>
#include<string.h>
void rev(char str[],int i,int j)
{
	char temp;
	while(i<j)
	{	
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
}
main()
{
	char str[300];
	int i,j;
	gets(str);
	rev(str,0,strlen(str)-1);
	i=0;
	j=0;
	while(i<strlen(str))
	{
		if((str[j]==' '||str[j]=='\0')&&j>0 )
		{
			rev(str,i,j-1);
			j=j+1;
			i=j;
		}
		else
		{
			j++;
		}
	}
	puts(str);
}
