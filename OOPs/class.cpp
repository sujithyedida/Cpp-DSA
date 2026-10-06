// creating a class named teacher

#include<iostream>
#include<string>
using namespace std;

//class Teacher defined 
class Teacher{

    //properties / attributes
    string name;
    string dept;
    string subject;

    //methods / member functions
    void change_dept(string newDept){
        dept=newDept;
    }
};

int main(){

    Teacher t1; //t1 is teacher 1 in the object teacher

    return 0;

}