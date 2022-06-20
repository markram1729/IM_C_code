//bubble sort
#include <iostream>

using namespace std;

int main()
{
	int n; // #of elements
	cin>>n;

	int *a;
	a= new int[n];

	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	int j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}


