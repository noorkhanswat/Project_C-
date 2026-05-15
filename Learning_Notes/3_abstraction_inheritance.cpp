// abstraction and inheritance of classes, details of implementation are hidden from users, users only need to know how to use the class, not how it works
// the code should be organized in a way that the implementation details are hidden from the users, and only the necessary information is exposed to the users
// abstraction is the process of hiding the implementation details and showing only the functionality to the users
// inheritance is the process of creating a new class from an existing class, the new class inherits the properties and behaviors of the existing class, and can also have its own properties and behaviors
// in C++, we can achieve abstraction and inheritance using classes and access specifiers (public, private, protected)  
// each code should be commented with detailed explanation of the code, and the code should be organized in a way that it is easy to understand and follow      

#include <iostream>
using namespace std;
// base class (parent class)
class Shape {
public:
    void setWidth(int w) {
        width = w;
    }
    void setHeight(int h) {
        height = h;
    }
protected:
    int width;
    int height;
};
// derived class (child class) inheriting from base class
class Rectangle : public Shape {
public:
    int getArea() {
        return width * height; // accessing the protected members of the base class
    }
};  
int main() {
    Rectangle rect; // creating an object of the derived class
    rect.setWidth(5); // calling the member function of the base class to set the width
    rect.setHeight(10); // calling the member function of the base class to set the height
    cout << "Area of rectangle: " << rect.getArea() << endl; // calling the member function of the derived class to get the area
    return 0;
}
/*
In this code, we have defined a base class named 'Shape' with two protected data members
'width' and 'height', and two public member functions 'setWidth' and 'setHeight' to set the values of these data members.
We have also defined a derived class named 'Rectangle' that inherits from the base class 'Shape' using public inheritance. The derived class has a member function 'getArea' that calculates and returns the area of the rectangle by accessing the protected members 'width' and 'height' of the base class.
In the 'main' function, we create an object of the derived class 'Rectangle' named 'rect'. We then call the member functions of the base class to set the width and height of the rectangle, and finally call the member function of the derived class to get and display the area      of the rectangle on the console.
*/      