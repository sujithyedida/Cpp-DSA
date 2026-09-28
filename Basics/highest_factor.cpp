// finding the highest factor of a number

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;

    for (int i=n-1; i>1; i--){
        if (n%i==0){
            cout<<"The highest factor of the number "<<n<<" is "<<i;
            break;
        }
        else{
            continue;
        }
    }

    return 0;
}
