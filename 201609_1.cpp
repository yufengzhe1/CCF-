#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int goal=0;
	
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n-1;i++)
		if(goal<abs(a[i+1]-a[i]))
			goal=abs(a[i+1]-a[i]);
			
	cout<<goal;
	return 0;
}

