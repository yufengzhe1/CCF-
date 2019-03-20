#include <iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[1001];
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
	}
	for(int j=1;j<=m;j++)
	{
		int p,q,temp,t;
		cin>>p>>q;
		for(int s=1;s<=n;s++)
		 {
		 	if (a[s]==p)
		 	  	t=s;
		 }	
		if(q>=0)
		{
		for(int k=t;k<=t+q;k++)
		{
			if(k==t)
			  temp=a[k];
			if(k>t&&k<=t+q)
			 a[k-1]=a[k];
			if(k==t+q)
			 a[k]=temp;
		}
		}

		if (q<0)
		for(int k=t;k>=t+q;k--)
		{
			if(k==t)
			  temp=a[k];
			if (k>t+q)
			 a[k]=a[k-1];
			if(k==t+q)
			 a[k]=temp;
		}
	}
		for(int i=1;i<=n;i++)
	{
		if (i==n)
		 cout<<a[i];
		else
		cout<<a[i]<<' ';
	}
}
