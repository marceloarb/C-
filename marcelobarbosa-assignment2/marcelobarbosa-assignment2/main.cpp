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
    
    Square square;
    float number;
    float areaSquare;
    cout << "Enter a Number: ";
    cin >> number;
    areaSquare = square.calculateSquareArea(number);
    cout << "Area of the square is: " << areaSquare << endl;
}



