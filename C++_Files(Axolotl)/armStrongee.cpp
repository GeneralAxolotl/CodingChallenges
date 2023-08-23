#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int countDigit();
int countDigit(long long n)
{
     if(n == 0)
           return 1;
     int count =0;
     while (n != 0)       
    {        
        n = n / 10;
        count++;
    }
    return count;
}
int main()
{
    int num,temp,sum,trueNum,a;
    cout<<"Enter a number"<<endl;cin>>trueNum;
    temp=trueNum;
    a=countDigit(temp);

    while(trueNum!=0)
    {
        num=trueNum%10;
        sum+=pow(num,a);
        trueNum/=10;
    }
    if(sum==temp)
    {
        cout<<sum<<" is a Armstrong Number";
    }
    else
    {
        cout<<sum<<" Is not a Armstrong Number";
    }
 return 0;
}