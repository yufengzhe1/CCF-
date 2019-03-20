#include <iostream>

using namespace std;

bool is_r(int year)
{
    if((year%4==0&&year%100!=0)||(year%400==0))
        return true;
    else
        return false;

}

int main()
{
    int year,d;
    cin>>year>>d;
    int n=0;
    int month=0,day=0;
    if(is_r(year))
        n=1;
    if(n)//ÈòÄê
    {


    if(d<=31)
    {
        month=1;
        day=d;
    }
    else if(d>31&&d<=60)
    {
        month=2;
        day=d-31;
    }
    else if(d>60&&d<=91)
    {
        month=3;
        day=d-60;
    }
    else if(d>91&&d<=121)
    {
        month=4;
        day=d-91;
    }
    else if(d>121&&d<=152)
    {
        month=5;
        day=d-121;
    }
    else if(d>152&&d<=182)
    {
        month=6;
        day=d-152;
    }
    else if(d>182&&d<=213)
    {
        month=7;
        day=d-182;
    }
    else if(d>213&&d<=244)
    {
        month=8;
        day=d-213;
    }
    else if(d>244&&d<=274)
    {
        month=9;
        day=d-244;
    }
        else if(d>274&&d<=305)
    {
        month=10;
        day=d-274;
    }
    else if(d>305&&d<=335)
    {
        month=11;
        day=d-305;
    }
    else if(d>335&&d<=366)
    {
        month=12;
        day=d-335;
    }


    }
    else//Æ½Äê
    {


    if(d<=31)
    {
        month=1;
        day=d;
    }
    else if(d>31&&d<=59)
    {
        month=2;
        day=d-31;
    }
    else if(d>59&&d<=90)
    {
        month=3;
        day=d-59;
    }
    else if(d>90&&d<=120)
    {
        month=4;
        day=d-90;
    }
    else if(d>120&&d<=151)
    {
        month=5;
        day=d-120;
    }
    else if(d>151&&d<=181)
    {
        month=6;
        day=d-151;
    }
    else if(d>181&&d<=212)
    {
        month=7;
        day=d-181;
    }
    else if(d>212&&d<=243)
    {
        month=8;
        day=d-212;
    }
    else if(d>243&&d<=273)
    {
        month=9;
        day=d-243;
    }
        else if(d>273&&d<=304)
    {
        month=10;
        day=d-273;
    }
    else if(d>304&&d<=334)
    {
        month=11;
        day=d-304;
    }
    else if(d>334&&d<=365)
    {
        month=12;
        day=d-334;
    }


    }

    cout<<month<<endl<<day;
    return 0;
}
