#include <iostream>

using namespace std;

int main()
{
	int N;
	cin>>N;
	int sum=0;
	while(N>0)
	{
		if(N>=50)
		{
			N-=50;
			sum+=7;
		}
		else if(N>=30)
		{
			N-=30;
			sum+=4;
		}
		else 
		{
			N-=10;
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
