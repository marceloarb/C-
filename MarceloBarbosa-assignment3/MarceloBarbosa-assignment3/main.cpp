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
    cin >> number;
    
    //calculate square area
    areaSquare = number * number;
    areaCircle = number * number * 3.14;

    cout << fixed << showpoint << setprecision(2);

    cout << "The areas of the shapes are: " << "\n";
    
    //Output Horizontal line
    cout << setw(10) << left << setfill('-') << "-"
    << setw(9) << left << setfill('-') << "-"
    <<"\n";
    
    
    //Output the header of the table
    cout << "|" << setw(10) << left << setfill(' ') << "Shape"
    << "|"
    << setw(9) << left << setfill(' ') << "Area"
    << "|"
    <<"\n";
    
    //Output unused columns with '_'
    cout << "|" << setw(10) << left << setfill(' ') << "Square"
    << "|"
    << setw(9) << right << setfill('_') << areaSquare
    << "|"
    <<"\n";
    
    cout << "|" << setw(10) << left << setfill(' ') << "Circle"
    << "|"
    << setw(9) << right << setfill('_') << areaCircle
    << "|"
    <<"\n";
    
    //Output Horizontal line
    cout << setw(10) << left << setfill('-') << "-"
    << setw(9) << left << setfill('-') << "-"
    <<"\n";
  
    
    return 0;

}
