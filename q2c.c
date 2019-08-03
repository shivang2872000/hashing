#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,b,c,i,j=0,k=-1,l=0;
	printf("enter the number of elements you want to insert\n");
	scanf("%d",&n);
	printf("write the size of the hash table\n");
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
		{
			while(1)
			{
				k++;
				j++;
				c=(c+(k*k))%m;
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
