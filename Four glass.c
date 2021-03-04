#include<stdio.h>
#include<conio.h>
int main()
{
	int n=0,p=0,q,m[100],j,k,i,l;
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
					q=g[1];
					g[1]=g[2];
					g[2]=q;
				}
				else if(x[j]=='B')
				{
					q=g[0];
					g[0]=g[3];
					g[3]=q;
				}
				else if(x[j]=='C')
				{
					q=g[0];
					g[0]=g[2];
					g[2]=q;
					p=g[1];
					g[1]=g[3];
					g[3]=p;
				}
				else if(x[j]=='D')
				{
					q=g[0];
					g[0]=g[1];
					g[1]=q;
					p=g[2];
					g[2]=g[3];
					g[3]=p;
				}
				else if(x[j]=='E')
				{
					q=g[0];
					g[0]=g[3];
					g[3]=q;
					p=g[1];
					g[1]=g[2];
					g[2]=p;
				}
			}
			for(k=0;k<4;k++)
			{
				if(g[k]==1)
				{
				printf(m[i]=k+1);
			    }	
			}
		}
		for(l=0;l<n;l++)
		{
        printf("%d\n",m[l]);
        }
	}
}
