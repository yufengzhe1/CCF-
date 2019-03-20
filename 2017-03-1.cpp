#include <iostream>
using namespace std;

int main()
{
	int n,k,temp=0,sum=0;
	int a[1001];
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		temp+=a[i];
		if(temp>=k)
		 {
		 	sum++;
		 	temp=0;
		 }
		 if((i==n)&&(0<temp&&temp <k))
		  sum++;
	}
	cout<<sum;
	return 0;
} 
