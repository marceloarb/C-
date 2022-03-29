
//  main.cpp
//  marcelobarbosa-assignment6
//
//  Created by Marcelo Barbosa on 3/25/22.
//

#include <iostream>
#include <iomanip>
using namespace std;

// Declaring function and functionality
void function4(int n){
    //Output message
    cout << "Number entered was: " << n << "\n";
}
// Declaring function and functionality
int function1(){
    //Declaring variable
    int n;
    
    //Output message
    cout << "Enter an integral number: ";
    
    //Prompt user for option number
    cin >> n;
    
    //returning variable
    return n;
}
// Declaring function and functionality
void function2(int &n){
    //Output message
    cout << "Enter an integral number that will be used as reference parameter: ";
    
    //Prompt user for option number
    cin >> n;
    
}
// Declaring function and functionality
int function3(int m){
    //Declaring variable
    int n3 = 0;
    
    //Creating loop
    while(n3<m){
        //Output message
        cout << "Enter an integral number that is higher than: " << m << "\n";
        
        //Prompt user for option number
        cin >> n3;
        
        //Implementing selection statements
        if(n3>m){
            //Break statement to stop loop
            break;
        }
    }
    //returning variable
    return n3;
}

// Declaring function and functionality
void function5(int m,int n){
    
    //Creating loop
    while(m<n || n<m){
        
        //Implementing selection statements
        if(m<n){
            
            //Calculating numbers between each other.
            n = n - 1;
            
            //Implementing selection statements
            if(n != m){
                
                //Output message
                cout << n << " ";
            
            }
        }
        //Implementing selection statements
        else if(n<m){
            //Calculating numbers between each other.
            m = m - 1;
            //Implementing selection statements
            if(n != m){
                //Output message
                cout << m << " ";
            }
        }
    }
    
    //Output first row option
    cout << " These are the number between the numbers M and N given as parameters." << "\n";
}


int main(int argc, const char * argv[]) {
    //Declaring variable
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    
    //Assigning function to variable.
    n1 = function1();
    
    //Calling function to print number
    function4(n1);
    
    //Calling function
    function2(n2);
    
    //Calling function to print number
    function4(n2);
    
    //Assigning value to variable
    n2 = 20;
    
    //Assigning function to variable.
    n3 = function3(n2);
    
    //Calling function to print number
    function4(n3);
    
    //Calling function
    function5(n2, n3);
    
    
    return 0;
}

