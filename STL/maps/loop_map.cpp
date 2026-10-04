//looping a map 

#include<iostream>
#include<map>
using namespace std;

int main(){

    map<string,int> people  = { {"Max",18} ,{"Robin",20}};

    // using for loop for printing the maps
    for (auto person : people){
        cout<<person.first<<" : "<<person.second<<endl;
    }

    
    return 0;
}