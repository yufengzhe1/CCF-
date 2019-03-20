#include <iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	//0空闲，1已将卖出去了 
	int s[20][5]={0};
//	for(int i=0;i<20;i++)
//	for(int j=0;j<5;j++)
//	cout<<s[i][j]<<endl;
	for(int i=0;i<n;i++)
	{
		bool flag=true;
		int need=a[i];
		for(int r=0;r<20;r++)
		{
			int remain=0,remains[5]={0};
			int p=0;
			for(int l=0;l<5;l++)
			{
				//cout<<"rrll"<<r<<l<<endl;
				if(s[r][l]==0)
				{
					remain++;	
					remains[p++]=l;
				}
					
			}
			if(remain>=need)
			{
				for(int k=0;k<need;k++)
				{
					cout<<5*r+remains[k]+1<<" ";
					s[r][remains[k]]=1;//标记为已经卖出去了 
				}
					
				cout<<endl;
				flag=false;
				break;
			}
		}
		if(flag)
		{
			for(int m=0;m <need;m++)
			{
				for(int r=0;r<20;r++)
				{
					for(int l=0;l<5;l++)
					{
						if(s[r][l]==0)
						{
							cout<<5*r+l+1<<" ";
							s[r][l]=1;
						}
							
					}
				}
			}
			cout<<endl;
		}			
	}
	
	return 0;
	
}
