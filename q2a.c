#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,b,c,i;
  int j=0,l=0,k;
	printf("enter the number of elements you want to insert\n");
	scanf("%d",&n);
	printf("enter the size of the hash table\n");
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
		{j++;
		while(1)
		{
			c++;
			c=c%m;
			if(a[c]==0)
			{
				a[c]=b;
				break;
				for(k=0;k<m;k++)
				{
				if(a[k]==0){
				 break;}
				 else
				 {
				 	printf("hash table is full\n");
				 	break;
				 }
					}
				}
			}
		}
	}
	for(i=0;i<m;i++)
	{
		if(a[i]==0)
		l++;

	}
	if(l==m)
	printf("hash table is empty\n ");
	printf("no. of collisions %d\n no.of empty slots is %d\n",j,l);
	for(i=0;i<m;i++)
	printf("%d\t",a[i]);
	return 0;
}
