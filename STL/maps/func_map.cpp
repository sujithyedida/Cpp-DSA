//some functions in maps 

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){

    map<string,int> age = { {"Max",18} , {"Robin",16} };

    //changing the value 
    age["Max"] = 20; //age updated to 20
    age.at("Robin") = 24; //--> another way of changing the value

    //adding new value
    age["Jenny"]=19;
    age.insert({"Jacob",28}); //--> another way of adding a new value

    //removing a value
    age.erase("Max");  //--> removes the value of "Max" along with key 

    for (auto person : age){
        cout<<person.first<<" : "<<person.second<<endl;
    }

    return 0;

}