#include<stdio.h>
int main()
{
	int n,m,b,c,p,i;
  int j=0,k=-1,l=0;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("enterthe size of the hash table\n");
	scanf("%d",&m);
	int a[m];
	for(i=0;i<m;i++)
	a[i]=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&b);
		c=b%m;

		if(a[c]==0)
		a[c]=b;
		else
		{p=8-(b%8);
			while(1)
			{
				k++;
				j++;
				c=(c+p)%m;
				if(a[c]==0)
				{
					a[c]=b;
					break;
				}
			}
		}
	}
	for(i=0;i<m;i++)
	{
		if(a[i]==0)
		l++;
	}
	printf("number of collisions and empty slots are %d %d\n",j,l);
	for(i=0;i<m;i++)
	printf("%d\t",a[i]);
	return 0;
}
