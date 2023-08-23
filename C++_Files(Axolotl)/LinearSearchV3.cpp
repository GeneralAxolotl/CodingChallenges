#include<iostream>
using namespace std;
int main()
{

    int target,row,col;
    int num[5][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    cout<<"Enter a target";cin>>target;
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