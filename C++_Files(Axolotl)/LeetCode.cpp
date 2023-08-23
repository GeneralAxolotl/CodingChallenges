#include<iostream>
using namespace std;

class Solution {
public:
    int sum(int num1, int num2) {
        float sum;
        cout<<"Enter First Integer";
        cin>>num1;
        cout<<"Enter Second Integer";
        cin>>num2;
        sum=num1+num2;
        return sum;
        
    }
};