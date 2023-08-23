#include<iostream>
using namespace std;
int main()
{

    int target,id;
    int num[5];
    
    for(int i=0;i<5;i++)
    {
        cout<<"Enter number :";
        cin>>num[i];
    }
    cout<<"Matrix : \n";
    for(int i=0;i<5;i++)
    { 
        cout<< num[i]<< " " ;
    }
    cout<<endl;
    cout<<"Enter a target :";cin>>target;
for(int n=0;n<5;n++)
    {
        if(num[n]==target)
        {
            id=n;
            cout<<"num["<<id+1<<"] Found it";
        }
        
    }
 return 0;
    


}