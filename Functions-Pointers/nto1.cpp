#include<iostream>
using namespace std;

int print(int a){
    cout<<a<<endl;
    if (a>1){
        print(a-1);
    }
}

int main(){

    int n;
    cout<<"Enter a number : ";
    cin>> n;

    print(n);

    return 0;
}
