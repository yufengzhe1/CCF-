#include <iostream>
#include <utility>
using namespace std;

int main()
{
	//��ʼ���Լ����� 
	int n,L,t;
	cin>>n>>L>>t;	
	//first����λ�ã�second������+1���ң�-1���� 
	pair<int,int> *a=new pair<int,int>[n];

	for(int i=0;i<n;i++)
	{
		cin>>a[i].first;
		a[i].second=1;
		if(a[i].first==L)
			a[i].second=-a[i].second;
	}
	//����
	while(t--)
	{
		for(int i=0;i<n;i++)
		{
			a[i].first+=a[i].second;
			if(a[i].first==L||a[i].first==0)//�������ͷ
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
	//��� 
	for(int i=0;i<n;i++)
		cout<<a[i].first<<" ";
		
	return 0;	
}
