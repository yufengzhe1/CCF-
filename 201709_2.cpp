#include <iostream>
#include <utility>
using namespace std;
//
//错误的，得了30分
// 
//
int main()
{
	//初始化和输入 
	int N,K;
	cin>>N>>K;
	int *tag=new int[N+1];//0表示位置无钥匙
	for(int i=1;i<=N;i++)
		tag[i]=i;
	//first为标号，second为取的时间 
	pair<int,int> *get=new pair<int,int>[K+1];
	//first为标号，second为还的时间 
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
	//将get和back按照second排序，取和还的时间
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
	//按照两个pair的second从小到大
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
