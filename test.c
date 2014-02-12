#include<stdio.h>
#include<string.h>
void comb(int depth,int start,char *com,char *org)
{
int i,len=strlen(org);
for(i=start;i<len;i++)
{
 com[depth]=org[i];
 com[depth+1]='\0';
 printf("Depth:%d   Start:%d\n",depth,start);
 //puts(com); 
 comb(depth+1,start+1,com,org);
 start++;	
}
}
main()
{
char com[50]="";
comb(0,0,com,"abcd");
}
