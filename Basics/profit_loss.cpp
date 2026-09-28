//taking both selling price and cost price and finding whether profit or loss or neither of them

#include<iostream>
using namespace std;

int main(){

    int selling_price;
    int cost_price;

    cout<<"Enter the selling price : ";
    cin>>selling_price;
    cout<<"Enter the cost price : ";
    cin>>cost_price;

    if (selling_price>cost_price){
        cout<<"Profit";
        int profit;
        profit=selling_price-cost_price;
        cout<<"The profit is",profit;
    }
    else if (selling_price<cost_price){
        cout<<"Loss";
        int loss;
        loss=cost_price-selling_price;
        cout<<"The loss is",loss;
    }
    else{
        cout<<"Neither profit nor loss";
    }

    return 0;
}