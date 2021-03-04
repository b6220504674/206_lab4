#include<stdio.h>
#include<string.h>
int main()
{
	int n=0,p=0,m=0,j,k,i;
	char x[50];
	scanf("%d",&n);
	if((n>0)&&(n<100))
	{
		for(i=0;i<n;i++)
		{
			scanf("%s",&x);
			int g[4]={1};
			for(j=0;j<strlen(x);j++)
			{
				if(x[j]=='A')
				{
					m=g[1];
					g[1]=g[2];
					g[2]=m;
				}
				else if(x[j]=='B')
				{
					m=g[0];
					g[0]=g[3];
					g[3]=m;
				}
				else if(x[j]=='C')
				{
					m=g[0];
					g[0]=g[2];
					g[2]=m;
					p=g[1];
					g[1]=g[3];
					g[3]=p;
				}
				else if(x[j]=='D')
				{
					m=g[0];
					g[0]=g[1];
					g[1]=m;
					p=g[2];
					g[2]=g[3];
					g[3]=p;
				}
				else if(x[j]=='E')
				{
					m=g[0];
					g[0]=g[3];
					g[3]=m;
					p=g[1];
					g[1]=g[2];
					g[2]=p;
				}
			}
			for(k=0;k<4;k++)
			{
				if(g[k]==1)
				printf("%d\n",k+1);
			}
		}
	}
}
