//
//  main.cpp
//  MarceloBarbosa-assignment3
//
//  Created by Marcelo Barbosa on 2/9/22.
//

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
//    Declaring variable to store input number
    float number;
    
    //    Declaring variable to store the result
    float areaSquare;
    
    //    Declaring variable to store the result
    float areaCircle;
    
//    Prompt the user to enter a number
    cout << "Enter a Number: ";
    
    //Get the number from the user
    cin >> number >> number;
    
    //Calculate square area
    areaSquare = number * number;
    
    //Calculate circle area
    areaCircle = number * number * 3.14;

    //Format the floating points numbers
    cout << fixed << showpoint << setprecision(2);

    //Output the message
    cout << "The areas of the shapes are: " << "\n";
    
    //Output Horizontal line
    cout << setw(23) << left << setfill('-') << "-"
    <<"\n";
    
    
    //Output the header of the table
    cout << "|" << setw(10) << left << setfill(' ') << "Shape"
    << "|"
    << setw(10) << right << setfill(' ') << "Area"
    << "|"
    <<"\n";
    
    //Output Horizontal line
    cout << setw(23) << left << setfill('-') << "-"
    <<"\n";
    
    //Output Area of the square
    cout << "|" << setw(10) << left << setfill(' ') << "Square"
    << "|"
    << setw(10) << right << setfill('_') << areaSquare
    << "|"
    <<"\n";
    
    //Output Horizontal line
    cout << setw(23) << left << setfill('-') << "-"
    <<"\n";
    
    //Output Area of the circle
    cout << "|" << setw(10) << left << setfill(' ') << "Circle"
    << "|"
    << setw(10) << right << setfill('_') << areaCircle
    << "|"
    <<"\n";
    
    //Output Horizontal line
    cout << setw(23) << left << setfill('-') << "-"
    <<"\n";

    
    int beta;
    int alpha;
    char ch1;
    char ch2;
    cin.get(ch1);
    cin.get(ch2);
    cin >> alpha;
    cout << ch1 << ch2, alpha;
    endif(beta=0);
    
    return 0;

}
