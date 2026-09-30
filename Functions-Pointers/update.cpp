//program to update the value of the variable using pointers

#include<iostream>
using namespace std;

int main(){

    int x;
    x=10;
    int* p=&x;
    *p=23; // here the value is being updated 
    cout<<x; //output --> 23
    return 0;
}