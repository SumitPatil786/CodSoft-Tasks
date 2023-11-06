#include<bits/stdc++.h>
using namespace std;

// Task 2- SIMPLE CALCULATOR

int main(){

    int k=1;

    while(k!=0){
    cout<<"PRESS '1'-Continue, '0'-End"<<endl;
    cin>>k;
    if(k==0){
        break;
    }
    int num1,num2;
    int sum=0, sub=0, mult=0, div=0;
    char op;
    cout<<"Enter Two Numbers:- "<<endl;
    cin>>num1>>num2;
    cout<<"Enter Opration { '+', '-' , '*' , '/' }"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        sum=num1+num2;
        cout<<"Addition is "<<sum<<endl;
        break;
    case '-':
        sub=num1-num2;
        cout<<"Subtraction is "<<sub<<endl;
        break;
    case '*':
        mult=num1*num2;
        cout<<"Multiplication is "<<mult<<endl;
        break;
    case '/':
        div=num1/num2;
        cout<<"Division is "<<div<<endl;
        break;
    
    default:
    cout<<"INVALID INPUT"<<endl;
        break;
    }
    }



}