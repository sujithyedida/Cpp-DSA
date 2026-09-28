// calling a function using another user defined function

#include<iostream>
using namespace std;

void india(){
    cout<<"I am in India"<<endl;
    return;
}

void usa(){
    india(); // user defined func usa calling another user defined fun india
    cout<<"I am in USA";
    return;
}

int main(){
    usa(); //now calling only usa function in which it calls india function
    return 0;
}