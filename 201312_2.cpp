#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
   char ch[13];
   cin>>ch;

   int shibiema;
   int num;
   char ccend;

   num=(int(ch[0])-48)*1+(int(ch[2])-48)*2+\
   (int(ch[3])-48)*3+(int(ch[4])-48)*4+(int(ch[6])-48)*5+\
   (int(ch[7])-48)*6+(int(ch[8])-48)*7+(int(ch[9])-48)*8+(int(ch[10])-48)*9;
   shibiema=num%11;
   if(shibiema==10)
    ccend='X';
    else
        ccend=char(shibiema+48);
   if(shibiema==(int(ch[12])-48)||(shibiema==10&&ch[12]=='X'))
   {
       cout<<"Right";
   }
   else
   {
       for(int i=0;i<12;i++)
        cout<<ch[i];

       cout<<ccend;
   }
   return 0;

}
