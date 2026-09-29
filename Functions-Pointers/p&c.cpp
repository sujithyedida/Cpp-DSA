// program for permutations and combinations 

#include<iostream>
using namespace std;

int n;
int r;

int fact_n(int a){
    int count_n;
    count_n=1;

    for (int i=1;i<=a;i++){
        count_n*=i;
    }
    return count_n;
}

int fact_r(int b){
    int count_r;
    count_r=1;

    for (int i=1;i<=b;i++){
        count_r*=i;
    }
    return count_r;
}

int fac_r_diff(int a,int b){
    int count2;
    count2 =1;
    int dif;
    dif=a-b;
    for (int i=1;i<=dif;i++){
        count2*=i;
    }
    return count2;
}


int main(){
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    int factorial_n = fact_n(n);
    int factorial_r_diff = fac_r_diff(n,r);
    int factorial_r = fact_r(r);
    int per;
    per = factorial_n/factorial_r_diff;
    int com;
    com=factorial_n/(factorial_r_diff*factorial_r);
    cout<<"Thus the permutation of "<<n<<" is "<<per;
    cout<<"Thus the  combination of "<<n<<" is "<<com;

    return 0;
    
}