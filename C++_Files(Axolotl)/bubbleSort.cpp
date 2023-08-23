#include<iostream>
using namespace std;
int main()
{            //0  1  2  3  4
    int num[]={12,10,15,16,11};
    for(int n=0;n<5;n++)
    {cout<<num[n]<< " ";}
    cout<<endl;
    for(int k=0;k<5;k++)
    {
    if(num[k]>num[k+1])
    {
        swap(num[k],num[k-1]);
    }
    }
    for(int i=0;i<5;i++)
    {cout<<num[i]<< " ";}
}