//
//  main.cpp
//  marcelobarbosa-assignment2
//
//  Created by Marcelo Barbosa on 2/3/22.
//

#include <iostream>
using namespace std;




int main(int argc, const char * argv[]) {
    
//    Declaring variable to store input number
    float number;
    
    //    Declaring variable to store the result
    float areaSquare;
    
//    Prompt the user to enter a number
    cout << "Enter a Number: ";
    
    //Get the number from the user
    cin >> number;
    
    //calculate square area
    areaSquare = number * number;
    
    //Output the calculated area
    cout << "Area of the square is: " << areaSquare << endl;
    return 0;
}



