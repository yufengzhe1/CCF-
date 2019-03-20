#include <iostream>

using namespace std;

int main()
{
	int a[30];
	int num=0;
	for(int i=0;i<30;i++)
	{
		cin>>a[i];
		num+=1;
		if(a[i]==0)
			break;
	}
	int sum=0;
	int temp=2;
	for(int j=0;j<num;j++)
	{
		if(a[j]==1)
		{
			sum+=1;
			temp=2;	
		}
		else if(a[j]==2)
		{
			sum+=temp;
			temp+=2;
		}
		else if(a[j]==0)
			break;	
	}
	cout<<sum;
	return 0;
	
}
