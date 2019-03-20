#include <iostream>

using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int *a=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int num=0;
	for(int i=0;i<n;)
	{
		int sum=0;
		int j=i;
		for(;;j++)
		{
			sum+=a[j];
			if(sum>=k||j==n-1)
			{
				num++;
				break;
			}
			else
				continue;
		}
		i=j+1;
	}
	cout<<num;
	return 0;
}
