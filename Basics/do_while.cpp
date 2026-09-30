// program to demonstrate do-while loop

#include <iostream>
using namespace std;

int main(){

    int age=18;

    do{
        cout<<"Age should be 18"<<endl;
        break;
    }while(age!=18);
    cout<<"The age now is not equal to 18";

    return 0;
}