//some more important functions on vectors

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<string> cars = {"Volvo","BMW","Nissan","Toyota"};

    //changing the value of elements
    cars[0] = "Audi"; //updates Volvo --> Audi
    cars.at(2) = "Honda"; //prefer this over [] as it shows errors and is more accurate

    //adding new elements in vectors
    cars.push_back("Mitsubishi");
    cars.push_back("Tesla");
    cars.insert(cars.begin() + 2, "Mercedes"); //adding in specific positions of indexing
    cars.emplace(cars.begin() + 3, "Mini"); //adding in specific position using emplace --> constructor which directly adds it into vectors

    //removing elements from the vector 
    cars.pop_back(); //--> removes the last element of the vector
    cars.erase(cars.begin() + 2); // --> removes the index 2 element

    //vector size
    cout<<cars.size()<<endl; //--> prints the length of the vector (6)

    for (string car : cars){
        cout<<car<<endl;
    }

    return 0;
}