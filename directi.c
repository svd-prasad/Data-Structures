#include<stdio.h>
#include<string.h>
#define MAX 11

main()
{
	char org[MAX],map[MAX],org1[30],map1[30],str[10]={'a','b','c','d','e','f','i','j'};
	int i,j,k,n,loop=0;
	org[0]='a';
	org[1]='b';
	org[2]='c';
	org[3]='d';
	org[4]='e';
	org[5]='f';
	org[6]='g';
	org[7]='i';
	org[8]='j';
	org[9]='k';
	org[10]='\0';
	map[0]='b';
	map[1]='c';
	map[2]='a';
	map[3]='e';
	map[4]='f';
	map[5]='9';
	map[6]='h';
	map[7]='j';
	map[8]='7';
	map[9]='p';
	map[10]='\0';
        j=0
	for(i=0;i<9;i++)
	{
		if(org[i]==str[j])
		{
			temp=map[i]-'0';
			if(temp>=1 && temp<=9){ printf("%c",temp); j++;}
                        else{ org[i]=map[i]; i=0;} 
                }
	}








	

}
