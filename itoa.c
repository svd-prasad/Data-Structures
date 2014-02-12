#include <stdio.h>

int main ()
{
  char buffer [50];
  int n, a=555, b=3;
  n=sprintf (buffer, "%d",a);
	puts(buffer);
	printf("%d",atoi(buffer));
 // printf ("[%s] is a string %d chars long\n",buffer,n);
  return 0;
}
