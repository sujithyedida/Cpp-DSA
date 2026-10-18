#include<iostream>
#include<string>
using namespace std;

class Teacher{
    private:
        double salary;
    public:
        string name;
        string dept;

        //setter function
        void setSalary(double s){
            salary=s;
        }

        //getter function
        int getSalary(){
            return salary;
        }
            
};


int main(){

    Teacher T1;
    T1.name="Max";
    T1.dept="CSE";

    T1.setSalary(2500);
    cout<<T1.name<<"'s salary : "<<T1.getSalary()<<endl;

    return 0;
}