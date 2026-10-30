//type1: non-parameterized constructors in oops 

#include<iostream>
#include<string>
using namespace std;

class Teacher{

    public:

        Teacher(){ //there are no perameters in this class : thus this is called non-parameterized constructors  
            cout<<"This is constructor";
        }

        string name;
        string dpt;

};

int main(){

    Teacher t1; //the constructor creates the object 

    t1.name="Max";
    t1.dpt="CSE";

    cout<<t1.name<<" : "<<t1.dpt;

    return 0;
}