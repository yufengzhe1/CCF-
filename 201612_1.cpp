#include <iostream>
#include <utility>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int goal,num1=0,num2=0;
	int *a=new int[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<n;i++)
		for(int j=i+1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	if(n%2==1)
	{
		for(int i=1;i<=(n+1)/2;i++)
			if(a[i]<a[(n+1)/2])
				num1++;
		for(int i=(n+1)/2+1;i<=n;i++)
			if(a[i]>a[(n+1)/2])
				num2++;

		if(num1==num2)
			goal=a[(n+1)/2];
		else 
			goal=-1;
	}
	else
	{
		if(a[n/2]==a[n/2+1])
		{
			for(int i=1;i<=n/2;i++)
				if(a[i]<a[n/2])
					num1++;
			for(int i=n/2+1;i<=n;i++)
				if(a[i]>a[n/2+1])
					num2++;
			if(num1==num2)
				goal=a[n/2];
			else
				goal=-1;	
		}
		else 
			goal=-1;
	}
	
	cout<<goal;
	return 0;
}
