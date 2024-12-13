#include<stdio.h>
int bsearch(int a[],int low,int high,int key)
{
	int mid;
	if (low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]<key)
		return mid;
		else if (a[mid]<key)
		return bsearch(a,mid+1,high,key);
		else
		return bsearch(a,low,mid-1,key);
	}
	else
	{
		printf("%d is not found",key);
		exit(0);
	}
}
int main()
{
	int a[10],n,p,i,k;
	printf("enter size:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0;i<n;i++)
	scanf ("%d",&a[i]);
	printf("enter key:");
	scanf("%d",&k);
	p=bsearch(a,0,n-1,k);
	if(p>=0)
	printf("%d is found at %d",k,p);
	return 0;
}
