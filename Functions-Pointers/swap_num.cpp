// program to write to swap 2 numbers 

#include <iostream>
using namespace std;

int swap(int a, int b){
    int tem; //temporary
    tem=a;
    a=b;
    b=tem;

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