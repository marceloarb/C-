//
//  main.cpp
//  marcelobarbosa-assignment5
//
//  Created by Marcelo Barbosa on 3/5/22.
//
#include <iostream>
#include <iomanip>
#include <fstream>
#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    //Declaring variable
    ifstream inFile;
    ofstream outFile;
    ofstream outFileClassStatistic;
    string name;
    float testScore1;
    float testScore2;
    float testScore3;
    float totalPoints;
    float numericGrade;
    string letterGrade;
    int numberStudents = 0;
    float averageNumericGrade = 0;
    
    //Opening Data file
    inFile.open("/Users/marcelobarbosa/Desktop/ProgrammingFundamentals1/Assignment5/Data.txt");
    
    //Added statement condition to check if the file was open.
    if (!inFile){
        cout << "Cannot open input file. Program terminates!\n"; return 1;
    }
    
    //Initializing Output file.
    outFile.open("/Users/marcelobarbosa/Desktop/ProgrammingFundamentals1/Assignment5/Data.out");
    outFileClassStatistic.open("/Users/marcelobarbosa/Desktop/ProgrammingFundamentals1/Assignment5/ClassStatistic.out");
    
    //Setting output file format
    outFile << fixed << showpoint << setprecision(2);
    
    //setting output format
    cout << fixed << showpoint << setprecision(2);
    
    //Output the header of the table in the file
    outFile << left << setw(12) << "Name"
    << left << setw(12) << "Test1"
    << left << setw(12) << "Test2"
    << left << setw(12) << "Test3"
    << left << setw(12) << "Total Points"
    << left << setw(12) << "Numeric Grade"
    << left << setw(12) << "Letter Grade" << endl;
    
    //Output the header of the table
    cout << left << setw(12) << "Name"
    << left << setw(12) << "Test1"
    << left << setw(12) << "Test2"
    << left << setw(12) << "Test3"
    << left << setw(20) << "Total Points"
    << left << setw(20) << "Numeric Grade"
    << left << setw(20) << "Letter Grade" << endl;
    
    //Reading the first line from the data file.
    inFile >> name;
    inFile >> testScore1;
    inFile >> testScore2;
    inFile >> testScore3;
    
    //Implemented loop to get all the data in the file.
    while(inFile){
        
        //Calcularing all the tests score from student and assign it to a variable.
        totalPoints = testScore1 + testScore2 + testScore3;
        
        //Calculating the average of the students grade
        numericGrade = totalPoints/3;
                
        //Incrementing number of students that exists in the file.
        numberStudents++;
        
        //Calculating the class total grade average.
        averageNumericGrade = averageNumericGrade + numericGrade;
        
        //Implementing statement to determine the letter grade due to the average of the grade
        switch (static_cast<int> (numericGrade) / 10)
        {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            letterGrade = 'F';
            break;
        case 6:
            letterGrade = 'D';
            break;
        case 7:
            letterGrade = 'C';
            break;
        case 8:
            letterGrade = 'B';
            break;
        case 9:
        case 10: letterGrade = 'A';
            break;
        default:
            cout << "Invalid score." << endl;
        }
        
        //Output the Student row of the table in the file
        outFile << right << setw(8) << name
                << right << setw(8) << testScore1
                << right << setw(12) << testScore2
                << right << setw(12) << testScore3
                << right << setw(20) << totalPoints
                << right << setw(20) << numericGrade
                << right << setw(20) << letterGrade << endl;
        
        //Output the Student row of the table
        cout << right << setw(8) << name
             << right << setw(8) << testScore1
             << right << setw(12) << testScore2
             << right << setw(12) << testScore3
             << right << setw(20) << totalPoints
             << right << setw(20) << numericGrade
             << right << setw(20) << letterGrade << endl;
        
        //Reading next line from the data file.
        inFile >> name;
        inFile >> testScore1;
        inFile >> testScore2;
        inFile >> testScore3;


    }
    
    //Calculating the average grade of the class
    averageNumericGrade = averageNumericGrade/numberStudents;
    
    //Output the header of the table in the file
    outFileClassStatistic << left << setw(12) <<  "Statistic"
    << left << setw(12) << "Value" << endl;
    
    //Output the next row of table in the file
    outFileClassStatistic << left << setw(12) << "Number"
    << right << setw(6) << numberStudents <<  endl;
    
    //Output the next row of table in the file
    outFileClassStatistic << left << setw(12) << "Average"
    << right << setw(6) << averageNumericGrade << endl;

    ///Output the header of the table
    cout << left << setw(12) <<  "Statistic"
    << left << setw(12) << "Value" << endl;
    
    //Output the next row of table
    cout << left << setw(12) << "Number"
    << right << setw(6) << numberStudents <<  endl;
    
    //Output the next row of table
    cout << left << setw(12) << "Average"
    << right << setw(6) << averageNumericGrade << endl;
    
    //Close files
    outFileClassStatistic.close();
    outFile.close();
    inFile.close();
    
    return 0;
}
