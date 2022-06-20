#include <iostream>
#include <cmath>
using namespace std;

int prime(int n)
{
	int i;
	if(n==2)
	{
		return 1;
	} 
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	cin>>n;
	int k = prime(n);
	if(k==1){
		printf("1 %d",n);
	}
	else {
	int r=10;
	//printf("1 ");
	if(n%2==0)
	{
		//printf("2");
		r=0;
	}
	while(r==0)
	{
		n=n/2;
		printf("2 ");
		r=n%2;
	}
	int i;
	for(i=3;i<=n;i+=2)
	{
		if(n%i==0)
		{
			r= prime(i);
			if(r==1)
			{
				while(n%i==0){
				printf("%d ",i);
				n=n/i;
				}

			}
		}
	}
	}

	return 0;
}
