#include <iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int m;
	cin>>m;
	int a[n+1];
	for(int i=1;i<=n;i++)
		a[i]=i;
	int p[m+1],q[m+1];
	for(int i=1;i<=m;i++)
		cin>>p[i]>>q[i];
	for(int l=1;l<=m;l++)
	{
		if(q[l]>0)
		{
			for(int k=1;k<=n;k++)
			{
				if(a[k]==p[l])
				{
					int temp=a[k];
					for(int t=k+1;t<=k+q[l];t++)
						a[t-1]=a[t];
					a[k+q[l]]=temp;
					break;
				}
			}
		}
		else
		{
			for(int kk=1;kk<=n;kk++)
			{
				if(a[kk]==p[l])
				{
					int temp=a[kk];
					for(int t=kk;t>kk+q[l];t--)
						a[t]=a[t-1];
					a[kk+q[l]]=temp;
					break;
				}
			}
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
