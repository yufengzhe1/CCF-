#include <iostream>
#include <utility>
using namespace std;
//
//����ģ�����30��
// 
//
int main()
{
	//��ʼ�������� 
	int N,K;
	cin>>N>>K;
	int *tag=new int[N+1];//0��ʾλ����Կ��
	for(int i=1;i<=N;i++)
		tag[i]=i;
	//firstΪ��ţ�secondΪȡ��ʱ�� 
	pair<int,int> *get=new pair<int,int>[K+1];
	//firstΪ��ţ�secondΪ����ʱ�� 
	pair<int,int> *back=new pair<int,int>[K+1];
	
	int *w=new int[K+1];
	int *s=new int[K+1];
	int *c=new int[K+1];
	
	for(int i=1;i<=K;i++)
	{
		cin>>w[i]>>s[i]>>c[i];
		//tag[i]=i;
		//cout<<tag[i]<<"iiiii"<<endl;
		get[i].first=w[i];
		get[i].second=s[i]; 
		back[i].first=w[i];
		back[i].second=s[i]+c[i];	
	}
	//��get��back����second����ȡ�ͻ���ʱ��
	for(int i=1;i<K;i++)
		for(int j=i+1;j<K+1;j++)
		{
			pair<int,int> temp;
			if(get[i].second>get[j].second)
			{
				temp=get[i];get[i]=get[j];get[j]=temp;
			}
		} 

	for(int i=1;i<K;i++)
		for(int j=i+1;j<K+1;j++)
		{
			pair<int,int> temp;
			if(back[i].second>back[j].second)
			{
				temp=back[i];back[i]=back[j];back[j]=temp;
			}
		}
	//��������pair��second��С����
	int i=1;
	int j=1;
	bool flag=false;
	for(;(i<K+2)&&(j<=K);)
	{
		
		if(flag==true||get[i].second>=back[j].second)
		{
			//cout<<"back"<<j<<endl;
			for(int P=1;P <=N;P++)
			{
				if(tag[P]==0)
				{
					tag[P]=back[j].first;
					//cout<<tag[P]<<endl;
					break;
				}
			}
			j++;
		}
		else if(get[i].second<back[j].second&&flag==false)
		{
			//cout<<"get"<<i<<get[i].first<<endl;
			for(int l=1;l<=N;l++)
			{
				if(tag[l]==get[i].first)
				{
					tag[l]=0;
					break;
				}
			}
			
			i++;
			if(i==K+1)
				flag=true;
		}		
	}
	
	for(int m=1;m <N+1;m++)
	{
		cout<<tag[m]<<" ";
	}
	
	delete []tag;
	delete []w;
	delete []s;
	delete []c;
	
	return 0;
}
