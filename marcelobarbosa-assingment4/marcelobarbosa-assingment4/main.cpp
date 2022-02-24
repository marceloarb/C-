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
    int rubricNumber;
    int courseNumber;
    int sectionNumber;
    string subjectName;
    string rubricName;
    string courseName;
    string sectionName;
    
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
    
    //output message to help user input an option
    cout << "Select a number option: ";
    
    //Prompt user for option number
    cin >> subjectNumber;
    
    //Implementing selection statements to determine which number goes with name
    if(subjectNumber == 1){
        subjectName = "Computer Science";
    }
    else if(subjectNumber == 2){
        subjectName = "Business Computer Applications";
    }
    else if(subjectNumber == 3){
        subjectName = "Computer Information Technology";
    }
    
    //Adding empy space between tables
    cout << "\n" << "\n" ;
    
    //Output Horizontal line
    cout << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output the header of the table
    cout << setw(27) << right << setfill(' ') << "RUBRIC"
    <<"\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output first row option
    cout << setw(2) << right << setfill(' ') << 1
    << setw(5) << right << setfill(' ') << "|"
    << setw(8) << right << setfill(' ') << "COSC"
    << "\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output second row option
    cout << setw(2) << right << setfill(' ') << 2
    << setw(5) << right << setfill(' ') << "|"
    << setw(8) << right << setfill(' ') << "BCIS"
    << "\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output third row option
    cout << setw(2) << right << setfill(' ') << 3
    << setw(5) << right << setfill(' ') << "|"
    << setw(8) << right << setfill(' ') << "ITSC"
    << "\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output fourth row option
    cout << setw(2) << right << setfill(' ') << 4
    << setw(5) << right << setfill(' ') << "|"
    << setw(8) << right << setfill(' ') << "ITSE"
    << "\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //output message to help user input an option
    cout << "Select a number option: ";
    
    //Prompt user for option number
    cin >> rubricNumber;
    
    //Implementing selection statements to determine which number goes with name
    if(rubricNumber == 1){
        rubricName = "COSC";
    }
    else if(rubricNumber == 2){
        rubricName = "BCIS";
    }
    else if(rubricNumber == 3){
        rubricName = "ITSC";
    }
    else if(rubricNumber == 4){
        rubricName = "ITSE";
    }
    
    //Adding empy space between tables
    cout << "\n" << "\n" ;
    
    //Output Horizontal line
    cout << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output the header of the table
    cout << setw(27) << right << setfill(' ') << "COURSE"
    <<"\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output first row option
    cout << setw(2) << right << setfill(' ') << 1
    << setw(5) << right << setfill(' ') << "|"
    << setw(8) << right << setfill(' ') << 1436
    << "\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output second row option
    cout << setw(2) << right << setfill(' ') << 2
    << setw(5) << right << setfill(' ') << "|"
    << setw(8) << right << setfill(' ') << 1437
    << "\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output third row option
    cout << setw(2) << right << setfill(' ') << 3
    << setw(5) << right << setfill(' ') << "|"
    << setw(8) << right << setfill(' ') << 2436
    << "\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output fourth row option
    cout << setw(2) << right << setfill(' ') << 4
    << setw(5) << right << setfill(' ') << "|"
    << setw(8) << right << setfill(' ') << 1301
    << "\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output fourth row option
    cout << setw(2) << right << setfill(' ') << 5
    << setw(5) << right << setfill(' ') << "|"
    << setw(8) << right << setfill(' ') << 1305
    << "\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output fourth row option
    cout << setw(2) << right << setfill(' ') << 6
    << setw(5) << right << setfill(' ') << "|"
    << setw(8) << right << setfill(' ') << 1405
    << "\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //output message to help user input an option
    cout << "Select a number option: ";
    
    //Prompt user for option number
    cin >> courseNumber;
    
    //Implementing selection statements to determine which number goes with name
    switch(courseNumber){
        case 1:
            courseName = "1436";
            break;
        case 2:
            courseName = "1437";
            break;
        case 3:
            courseName = "2436";
            break;
        case 4:
            courseName = "1301";
            break;
        case 5:
            courseName = "1305";
            break;
        case 6:
            courseName = "1405";
            break;
    }
    
    //Adding empy space between tables
    cout << "\n" << "\n" ;
    
    //Output Horizontal line
    cout << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output the header of the table
    cout << setw(27) << right << setfill(' ') << "SECTION"
    <<"\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output first row option
    cout << setw(2) << right << setfill(' ') << 1
    << setw(5) << right << setfill(' ') << "|"
    << setw(8) << right << setfill(' ') << 82001
    << "\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output second row option
    cout << setw(2) << right << setfill(' ') << 2
    << setw(5) << right << setfill(' ') << "|"
    << setw(8) << right << setfill(' ') << 82002
    << "\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output third row option
    cout << setw(2) << right << setfill(' ') << 3
    << setw(5) << right << setfill(' ') << "|"
    << setw(8) << right << setfill(' ') << 82003
    << "\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output fourth row option
    cout << setw(2) << right << setfill(' ') << 4
    << setw(5) << right << setfill(' ') << "|"
    << setw(8) << right << setfill(' ') << 82701
    << "\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    //Output fourth row option
    cout << setw(2) << right << setfill(' ') << 5
    << setw(5) << right << setfill(' ') << "|"
    << setw(8) << right << setfill(' ') << 82702
    << "\n"
    << setw(50) << left << setfill('-') << "-"
    <<"\n";
    
    
    //output message to help user input an option
    cout << "Select a number option: ";
    
    //Prompt user for option number
    cin >> sectionNumber;
    
    //Implementing selection statements to determine which number goes with name
    switch(sectionNumber){
        case 1:
            sectionName = "82001";
            break;
        case 2:
            sectionName = "82002";
            break;
        case 3:
            sectionName = "82003";
            break;
        case 4:
            sectionName = "82701";
            break;
        case 5:
            sectionName = "82702";
            break;
    }
    
    //output message
    cout << "You are now registered for the "
    << subjectName
    << ", course "
    << rubricName
    << "-"
    << courseName
    << "-"
    << sectionName
    << "!";

    cout << "\n";
    return 0;
}
