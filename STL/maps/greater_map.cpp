//greater<datatype>  

#include<iostream>
#include<map>
using namespace std;

int main(){

    //greater function : makes the sorting descending 
    map<string,int,greater<string>> people  = { {"Anne",18} ,{"Bob",20},{"Carl",29}};

    // using for loop for printing the maps
    for (auto person : people){
        cout<<person.first<<" : "<<person.second<<endl;
    }

    
    return 0;
}