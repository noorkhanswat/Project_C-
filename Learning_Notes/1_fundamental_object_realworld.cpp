// fundamentals of objects and real world modeling, explain me with detail 
#include <iostream>
using namespace std;
// class definition for a real world object, in this case, a car
class Car {
public:
    // member variables to represent the properties of a car
    string brand;
    string model;
    int year;
    // member function to display the details of the car
    void displayDetails() {
        cout << "Car Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};
int main() {
    // creating an object of the Car class
    Car myCar;
    // setting the properties of the car using the member variables
    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.year = 2020;
    // calling the member function to display the details of the car
    myCar.displayDetails();
    return 0;
    };
/*
In this code, we have defined a class named 'Car' that represents a real world object, which is a car. The class has three member variables: 'brand', 'model', and 'year', which represent the properties of a car. The class also has a member function named 'displayDetails' that displays the details of the car on the console.
In the 'main' function, we create an object of the 'Car' class named 'myCar'. We then set the properties of the car by assigning values to the member variables. Finally, we call the member function '             
displayDetails' to display the details of the car on the console. This code demonstrates how we can model real world objects using classes in C++. Each object of the class can have its own unique properties and behaviors, which allows us to represent different instances of the same type of object.
*/ 