// equal keys in maps 

#include<iostream>
#include<map>
using namespace std;

int main(){

   map<string,int> age = { {"Max",18} , {"Robin",16} };

   //equal keys given with 2 different values 
   age["Jenny"] = 20; 
   age["Jenny"] = 30; //--> as this is updated recently the value is 30

   for (auto person : age){
    cout<<person.first<<" : "<<person.second<<endl;
   }

    return 0;
}