//
//  main.cpp
//  marcelobarbosa-assignment2
//
//  Created by Marcelo Barbosa on 2/3/22.
//

#include <iostream>
#include "Square.cpp"
using namespace std;




int main(int argc, const char * argv[]) {
//    Instantiate object
    Square square;
    
//    Declaring variable to store input number
    float number;
    
    //    Declaring variable to store the result
    float areaSquare;
    
//    Prompt the user to enter a number
    cout << "Enter a Number: ";
    
    //Get the number from the user
    cin >> number;
    
    //Calling object method to calculate square area
    areaSquare = square.calculateSquareArea(number);
    
    //Output the calculated area
    cout << "Area of the square is: " << areaSquare << endl;
    return 0;
}



