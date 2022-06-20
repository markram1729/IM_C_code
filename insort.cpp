
// Insertion sort
#include <iostream>

using namespace std;

int main()
{
	int n;  //#of elements
	cin>>n;

	int *a;
	a= new int[n];
	int i,j;

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(i=1;i<n;i++)
	{
		int t=a[i]; // pivot
		j=i-1;
		for(;(j>=0)&&(t<a[j]);j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=t;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

	return 0;
}

