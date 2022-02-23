//
//  main.cpp
//  marcelobarbosa-assingment4
//
//  Created by Marcelo Barbosa on 2/23/22.
//

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    //Declaring variable
    int subjectNumber;
    string subjectName;
    
    //Output Horizontal line
    cout << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output the header of the table
    cout << setw(28) << right << setfill(' ') << "SUBJECT"
    <<"\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output first row option
    cout << setw(2) << right << setfill(' ') << 1
    << setw(5) << right << setfill(' ') << "|"
    << setw(20) << right << setfill(' ') << "Computer Science"
    << "\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output second row option
    cout << setw(2) << right << setfill(' ') << 2
    << setw(5) << right << setfill(' ') << "|"
    << setw(34) << right << setfill(' ') << "Business Computer Applications"
    << "\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output third row option
    cout << setw(2) << right << setfill(' ') << 3
    << setw(5) << right << setfill(' ') << "|"
    << setw(35) << right << setfill(' ') << "Computer Information Technology"
    << "\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    cout << "Select an option: ";
    cin >> subjectNumber;
    
    if(subjectNumber == 1){
        subjectName = "Computer Science";
        cout << "You have selected " << subjectName;
    }
    else if(subjectNumber == 2){
        subjectName = "Business Computer Applications";
        cout << "You have selected " << subjectName;
    }
    else if(subjectNumber == 3){
        subjectName = "Computer Information Technology";
        cout << "You have selected " << subjectName;
    }

    cout << "\n";
    return 0;
}