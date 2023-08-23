#include<iostream>
using namespace std;
int main()
{

    int target,row,col;
    int num[5][5];
    for(int i=0;i<5;i++)
    {
    for(int j=0;j<5;j++)
    {
    cout<<"Enter the values :";
    cin>>num[i][j];
    }
    }
    cout<<"Matrix : \n";
    for(int i=0;i<5;i++)
    {   for(int j=0;j<5;j++)
        {cout<< num[i][j] << " " ;}
        cout<<"\n";
    }
    cout<<endl;
    cout<<"Enter a target :";cin>>target;
    for(int n=0;n<5;n++)
    for(int k=0;k<5;k++)
        if(num[n][k]==target)
        {
            row=n;
            col=k;
            cout<<"num["<<n+1<<"]"<<"["<<k+1<<"] Found it";
        }
        
    

    return 0;
    


}