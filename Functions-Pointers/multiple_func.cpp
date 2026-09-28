//calling multiple functions in the main function

#include<iostream>
using namespace std;

void greet(){
    cout<<"Hi! Good morning, ";
}
void name(){
    cout<<"My name is Sujith";
}

int main(){
    greet();
    name();
    return 0;
}