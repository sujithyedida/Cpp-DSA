//clearing map and also checking whether it is empty 

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){

    map<string,int> age = { {"Sujith",18} , {"Sreejan",16} };
    //empty or not 
    cout<<age.empty()<<endl; //output --> 0 [not empty]
    age.clear(); //clearing the map
    cout<<age.empty(); //output --> 1 [empty]
    
    return 0;

}