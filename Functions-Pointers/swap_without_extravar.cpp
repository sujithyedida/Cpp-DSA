// program to swap 2 numbers without using an extra variable 

#include <iostream>
using namespace std;

int swap(int a, int b){
    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"Number 1 after swap : "<<a<<" and Number 2 after swap : "<<b;
    return 0;
}

int main(){ 

    int n1;
    int n2;

    cout<<"Enter number 1 : ";
    cin>>n1;
    cout<<"Enter number 2 : ";
    cin>>n2;

    swap(n1,n2);

    return 0;
}