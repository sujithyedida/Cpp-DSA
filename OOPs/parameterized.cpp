//type2: parameterized constructors in oops 

#include<iostream>
#include<string>
using namespace std;

class Teacher{

    public:

       Teacher(string n, string d) : name(n), dpt(d) { //there are parameters inside which reads the values of the object : polarized constructor
       }

        string name;
        string dpt;

        void getInfo(){
            cout<<"Name of the teacher is "<<name<<endl;
            cout<<"Dept. of "<<dpt<<endl;
        }

};

int main(){

    Teacher t1("Max","Computer Science"); //the constructor creates the object and the values/arguments are passed over
    t1.getInfo(); //this function helps us to print the name and the dpt of the person 

    return 0;
}