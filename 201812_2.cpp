#include <iostream>

using namespace std;

int main()
{
	//初始化和输入 
	int r,y,g;
	int n;
	cin>>r>>y>>g;
	cin>>n;
	int *arr_kind=new int[n];
	int *arr_t=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr_kind[i]>>arr_t[i];
	} 
	int sum_light=r+g+y;//红绿灯总时间 
	//计算
	long long int sum_t=0;
	for(int j=0;j<n;j++)
	{
		if(arr_kind[j]==0)
			sum_t+=arr_t[j];
		else
		{
			int temp=sum_t%sum_light;
			if(arr_kind[j]==1)
			{
				if(temp<=arr_t[j])
					sum_t=sum_t+arr_t[j]-temp;
				else if(temp>arr_t[j]&&temp<=(arr_t[j]+g))
					sum_t+=0;
				else if(temp>(arr_t[j]+g)&&temp<=(arr_t[j]+g+y))
					sum_t=sum_t+arr_t[j]+g+y-temp+r;
				else if(temp>(arr_t[j]+g+y)&&temp<=sum_light)
					sum_t=sum_t+sum_light-temp+arr_t[j];
			}
			else if(arr_kind[j]==2)
			{
				if(temp<=arr_t[j])
					sum_t=sum_t+arr_t[j]-temp+r;
				else if(temp>arr_t[j]&&temp<=(arr_t[j]+r))
					sum_t=sum_t+arr_t[j]-temp+r;
				else if(temp>(arr_t[j]+r)&&temp<=(arr_t[j]+r+g))
					sum_t+=0;
				else if(temp>(arr_t[j]+r+g)&&temp<=sum_light)
					sum_t=sum_t+sum_light-temp+arr_t[j]+r;
			}
			else if(arr_kind[j]==3)
			{
				if(temp<=arr_t[j])
					sum_t+=0;
				else if(temp>arr_t[j]&&temp<=(arr_t[j]+y+r))
					sum_t=sum_t+arr_t[j]+y+r-temp;
				else if(temp>(arr_t[j]+y+r)&&temp<=sum_light)
					sum_t+=0;
			}
		} 
	} 
	//输出
	cout<<sum_t;
	return 0; 
	
	
}
