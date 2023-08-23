#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number of Alphabets";cin>>n;
    for(int j=1;j<=n;j++)
{
    char ch='A';
    for(int i=1;i<=j;i++)
    {
        cout<<ch++;
    }
    cout<<endl;
    }
}