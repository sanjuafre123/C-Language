//Q.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array.
// Keep in mind that both array sizes can be different.
#include<stdio.h>
main()
{
	int n,m,o;
	printf("emter the value of n:");
	scanf("%d",&n);
	printf("emter the value of m:");
	scanf("%d",&m);
	int a[n];
	int b[m];
	int marge[o=m+n];
	int i,j=0;
	
	
	for(i=0; i<n; i++)
	{
		printf("enter the vlaue a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<m; i++)
	{
		printf("enter the vlaue b[%d]:",i);
		scanf("%d",&b[i]);
	}
	for(i=0; i<m; i++)
	{
		printf("%d",b[i]);
	}
	for(i=0; i<n; i++)
	{
		marge[i]= a[i];
	}
	for(i=n; i<o; i++)
	{
		marge[i]= b[j];
		j++;
	}
	for(i=0; i<o; i++)
	{
		printf("%d",marge[i]);
	}
	
	
	
}
