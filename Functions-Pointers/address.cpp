// to find the address of the variable

#include<iostream>
using namespace std;

int main(){
    int n;
    n=3;

    cout<<&n; //prints the location of the n in which number 3 is stored 

    // output : 0x61ff0c --> hexadecimal address where the variable n is stored
}