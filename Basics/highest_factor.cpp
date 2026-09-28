// finding the highest factor of a number

#include<iostream>
using namespace std;

bool flag;
int n;

void prime(){
    for (int i=1; i<=n; i++){
        if (n%i==0){
            flag=false;
            break;
        }
    }
}

int main(){
    cout<<"Enter a number : ";
    cin>>n;

    prime();

    if (n==1){
        cout<<"The highest factor is 1";
    }
    else{
        if (flag==true){
            cout<<"The highest factor of "<<n<<" as it is a prime number";
        }
        else{
            for (int i=n/2; i>1; i--){
                if (n%i==0){
                    cout<<"The highest factor of the number "<<n<<" is "<<i;
                    break;
                }
            }
        }
    }

    return 0;
}


