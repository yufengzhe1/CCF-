#include <iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>=a[j])
			{
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;	
			}
		}
	int min=1000;
	for(int i=0;i<n-1;i++)
	{
		int t=a[i+1]-a[i];
		if(t<=min)
			min=t;
	}
	cout<<min;
	return 0;
	
}
