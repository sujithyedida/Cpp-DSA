// swap 2 numbers using pointers

#include<iostream>
using namespace std;

int swap(int* a, int* b){ //pointers used as parameters
    int temp = *a;
    *a=*b;
    *b=temp;

    cout<<*a<<" "<<*b; // 3 2
    return 0;
}

int main(){
    int x = 2;
    int y = 3;
    swap(&x,&y);

    return 0;
}