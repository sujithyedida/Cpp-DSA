// find whether a number is prime or composite

#include<iostream>
using namespace std;

int prime(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    bool flag;
    flag=true; //setting the value with default true which initially assumes that the number is prime

    if(n==1){
        cout<<"It is neither prime nor composite";
    }
    else{
        for (int i=2; i<n; i++){
            if (n%i==0){
                flag=false;
                break;
            }
            else{
                continue;
            }
        }
    }

    if (flag==true){
        cout<<"The number is prime";
    }
    else{
        cout<<"The number is composite";
    }

}

int main(){
    //calling the function prime which decides whether a number is prime or not
    prime();
    return 0;
}