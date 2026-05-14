#include <iostream>
 using namespace std;
 // sample function to print "Hello, World!" to the console
 void printHelloWorld() {
     cout << "Hello, World!" << endl;
 }
 // function to draw heart shape using asterisks
    void drawHeart() {
        for (float y = 1.5f; y > -1.5f; y -= 0.1f) {
            for (float x = -1.5f; x < 1.5f; x += 0.05f) {
                float a = x * x + y * y - 1;
                if (a * a * a - x * x * y * y * y <= 0.0f) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

    // calculator function to perform basic arithmetic operations
    double calculator(double num1, double num2, char operation) {
        switch (operation) {
            case '+':
                return num1 + num2;
            case '-':
                return num1 - num2;
            case '*':
                return num1 * num2;
            case '/':
                if (num2 != 0) {
                    return num1 / num2;
                } else {
                    cout << "Error: Division by zero!" << endl;
                    return 0; // return 0 or handle as needed
                }
            default:
                cout << "Error: Invalid operation!" << endl;
                return 0; // return 0 or handle as needed
        }
    }

 int main() {
     printHelloWorld(); // call the function to print the message
        drawHeart(); // call the function to draw the heart shape   
        // Example usage of the calculator function
        double num1 = 10.0;
        double num2 = 5.0;
        char operation = '+';
        double result = calculator(num1, num2, operation);
        cout << "Result of " << num1 << " " << operation << " " << num2 << " = " << result << endl; 
            
     return 0;
 }