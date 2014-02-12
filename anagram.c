#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct dupstring
{
	int size;
	char *dupwords[10];
};


/* qsort C-string comparison function */ 
int cstring_cmp(const void *a, const void *b) 
{ 
    const char **ia = (const char **)a;
    const char **ib = (const char **)b;
    return strcmp(*ia, *ib);
	/* strcmp functions works exactly as expected from
	comparison function */ 
} 
int comparestr(const void *a,const void *b) 
{
	char **string1=(char **)a;
	char **string2=(char **)b;
	return  strcmp(*string1,*string2);
	
} 
/* C-string array printing function */ 
void print_cstring_array(char **array, size_t len) 
{ 
    size_t i;
 
    for(i=0; i<len; i++) 
        printf("%s | ", array[i]);
 
    putchar('\n');
} 
 
/* sorting C-strings array using qsort() example */ 
void sort_cstrings_example() 
{ 
    char *strings[] = { "Zorro", "Alex", "Celine", "Bill", "Forest", "Dexter" };
    size_t strings_len = sizeof(strings) / sizeof(char *);
 
    /** STRING */ 
    puts("*** String sorting...");
 
    /* print original string array */ 
    print_cstring_array(strings, strings_len);
 
    /* sort array using qsort functions */ 
    qsort(strings, strings_len, sizeof(char *), cstring_cmp);
 
    /* print sorted string array */ 
    print_cstring_array(strings, strings_len);
} 
int comparestr1(const void * a,const void * b) 
{
	struct dupstring *string1=(struct dupstring *)a;
	struct dupstring *string2=(struct dupstring *)a;
	return  strcmp(string1->dupwords,string2->dupwords);
	
}

int compareint(const void * num1,const void * num2)
{
	return *(int *)num1 - *(int *)num2;
}
int comparechar(const void * char1,const void * char2)
{
	return *(char *)char1 - *(char *)char2;
}
main()
{
	char *str[]={"cat","mat","bat","atc","tab"};
	int i,a[]={9,8,7,6,5,4};
	//qsort(a,6,sizeof(int),compareint);
        //for(i=0;i<5;i++)
	//printf("%d\n",a[i]);
	//qsort(string,sizeof(string),sizeof(char),comparechar);
        //qsort(str[0],sizeof(str[0]),sizeof(char),comparechar);
	int size=sizeof(str)/sizeof(char *);
	struct dupstring *dup=(struct dupstring *)malloc(sizeof(struct dupstring));
	dup->size=size;
        for(i=0;i<size;i++)
	{
		dup->dupwords[i]=(char *)malloc(sizeof(char)*strlen(str[i]));
		char *string=(char *)malloc(sizeof(char)*strlen(str[i]));
                strcpy(string,str[i]);
		qsort(string,strlen(string),sizeof(char),comparechar);
		//puts(string);
		strcpy(dup->dupwords[i],string);
		//puts(dup->dupwords[i]);
		free(string);
	}


	
	
	//qsort(str,size,sizeof(str[0]),comparestr);
	//for(i=0;i<size;i++)
	//puts(str[i]);
	//sort_cstrings_example();
	qsort(dup->dupwords,dup->size,sizeof(dup->dupwords[0]),comparestr);	
	for(i=0;i<dup->size;i++)
	puts(dup->dupwords[i]);
}
































