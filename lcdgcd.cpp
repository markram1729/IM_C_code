#include <iostream>

using namespace std;

int gcd(int a,int t)
{

    if(a>t){
        int r= a%t;
        if(r==0)
        {
            return t;
        }
        gcd(t,r);
    }
    else{
        int r= t%a;
        if(r==0)
        {
            return a;
        }
        gcd(a,r);
    }    
}
int main()
{
    int n;
    cin>>n;
    int *a;
    a = new int[n];
    int k=1;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        k = a[i]*k;
    }
    int t=a[0];
    for(i=1;i<n;i++)
    {
        t = gcd(a[i],t);
    }

    printf("gcd :%d ,lcm : %d",t,(k)/t);
    return 0;
}
