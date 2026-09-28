// parameters and arguments

#include<iostream>
using namespace std;

int sum(int a,int b){ //the values present here are parameters
    return a+b;
}

int main(){
    
    cout<<sum(10,20); //the values passed here are arguments 

    return 0;
}

//the values of arguments are substitued in the parameters and thus the operatiosn take place 