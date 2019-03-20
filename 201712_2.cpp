#include <iostream>

using namespace std;
int vis[1005];
int main()
{
    int n, k, i;
     cin >> n >> k;
    int num = 0, c = 0;//num是剔除的人数
    while(num != n - 1)
    {
         for(i = 1; i <= n; i++)
         {
             if(!vis[i])
            {
                 c++;
                 if(c % 10 == k || c % k == 0)
                 {
                     vis[i] = 1;
                     num++;
                     if(num == n - 1)
                         break;
                 }
             }
        }
     }
     for(i = 1; i <= n; i++)
         if(!vis[i]) break;
     cout<<i;
    return 0;
 }

