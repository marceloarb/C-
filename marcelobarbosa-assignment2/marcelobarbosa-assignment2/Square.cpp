//
//  Square.cpp
//  marcelobarbosa-assignment2
//
//  Created by Marcelo Barbosa on 2/6/22.
//

#include <stdio.h>

//Creating object blueprint
class Square{
    //Constructor
    public:
    //Function or method to calculate object area.
        float calculateSquareArea(float number){
            
            //    Declaring variable to store the result
            float result = number * number;
            
            //    Returning variable with the result
            return (result);
        }
};
