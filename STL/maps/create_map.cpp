//creating maps 

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){

    map<string,int> age = { {"Max",18} , {"Robin",16} };

    cout<<"The age of Max is "<<age["Max"];

    return 0;

}