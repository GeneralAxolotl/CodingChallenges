#include<iostream>
using namespace std;
int main()
{
    int num[100];
    for(int i=0;i<=100;i++)
    {
       num[i]=i;
    }
    
    for(int k=0;k<=100;k++)
    {
    if(num[k]%2==0||num[k]%5==0)
    {cout<<"BizzBazz"<<endl;}
    if(num[k]%2==0)
    {cout<<"Bizz"<<endl;}
    if(num[k]%5==0)
    {cout<<"bazz"<<endl;}
    else;
    {cout<<num[k]<<endl;}


    }
}

