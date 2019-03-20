#include <iostream>
#include <utility>
using namespace std;

int main()
{
	//初始化以及输入 
	int n,L,t;
	cin>>n>>L>>t;	
	//first代表位置，second代表方向，+1向右，-1向左 
	pair<int,int> *a=new pair<int,int>[n];

	for(int i=0;i<n;i++)
	{
		cin>>a[i].first;
		a[i].second=1;
		if(a[i].first==L)
			a[i].second=-a[i].second;
	}
	//计算
	while(t--)
	{
		for(int i=0;i<n;i++)
		{
			a[i].first+=a[i].second;
			if(a[i].first==L||a[i].first==0)//碰壁则掉头
				a[i].second=-a[i].second; 	
		}
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
				if (a[i].first==a[j].first)
				{
					a[i].second=-a[i].second;
					a[j].second=-a[j].second;
				}
	} 
	//输出 
	for(int i=0;i<n;i++)
		cout<<a[i].first<<" ";
		
	return 0;	
}
