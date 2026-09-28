// finding the greatest number among the 3 inputed numbers 

#include<iostream>
using namespace std;

int main(){

    int n1;
    int n2;
    int n3;

    cout<<"Enter number 1 : ";
    cin>>n1;
    cout<<"Enter number 2 : ";
    cin>>n2;
    cout<<"Enter number 3 : ";
    cin>>n3;

    if(n1>n2){
        if(n2>n3){
            cout<<n1<<" is the greatest number among the 3 numbers";
        }
        else{
            cout<<n3<<" is the greatest number among the 3 numbers";
        }
    }
    else if(n2>n1){
        if(n2>n3){
            cout<<n2<<" is the greatest number among the 3 numbers";
        }
        else{
            cout<<n3<<" is the greatest number among the 3 numbers";
        }
    }
    else if(n3>n1){
        if(n3>n2){
            cout<<n3<<" is the greatest number among the 3 numbers";
        }
        else{
            cout<<n2<<" is the greatest number among the 3 numbers";
        }
    }
    else{
        cout<<"Invalid numbers entered";
    }

    return 0;
}
