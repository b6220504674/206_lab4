#include<stdio.h>
#include<string.h>
void Acronym(char *s);
int main()
{
	char uname[100];
	gets(uname);
	Acronym(uname);
}
void Acronym(char *s)
{
	int i=0,n=0;
	char *delim=' ';
	char *senten;
	senten=strtok(s,delim);
	while(senten!=NULL)
	{
		if(strcmp('i',senten)==0||strcmp('of',senten)==0||strcmp('the',senten)==0||strcmp('on',senten)==0||strcmp('at',senten)==0||strcmp('for',senten)==0||strcmp('with',senten)==0||strcmp('a',senten)==0||strcmp('an',senten)==0||strcmp('in',senten)==0||strcmp('and',senten)==0)
		n++;
    }
    if(i==0)
	{
		printf("%c",toupper(senten[0]));
	}
	else if(n==0)
	{
		printf("%c",toupper(senten[0]));
		senten=strtok(NULL,delim);
		i++;
		n=0;
	}
}
