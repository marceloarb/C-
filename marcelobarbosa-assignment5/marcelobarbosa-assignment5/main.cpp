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
    ifstream inFile;
    inFile.open("/Users/marcelobarbosa/Desktop/ProgrammingFundamentals1/Assignment5/Data.txt");
    ofstream outFile;
    string name;
    float testScore1;
    float testScore2;
    float testScore3;
    float totalPoints;
    float numericGrade;
    string letterGrade;
    
    if (!inFile){
        cout << "Cannot open input file. Program terminates!\n"; return 1;
    }
    outFile.open("/Users/marcelobarbosa/Desktop/ProgrammingFundamentals1/Assignment5/Data.out");

    outFile << fixed << showpoint << setprecision(2);
    
    inFile >> name;  //read the name
    inFile >> testScore1;
    inFile >> testScore2;
    inFile >> testScore3;
    
    while(inFile){
        cout << "oi";
        totalPoints = testScore1 + testScore2 + testScore3;
        numericGrade = totalPoints/2; //update sum
        switch (static_cast<int> (totalPoints) / 3){
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
            case 10: letterGrade = 'A';
                break;
            default: cout << "Invalid score." << endl;
                
        
                
        outFile << left << setw(12) << name
        << setw(12) << testScore1
        << setw(12) << testScore2
        << setw(12) << testScore3
        << setw(12) << totalPoints
        << setw(12) << numericGrade
        << setw(12) << letterGrade << endl;
                
        inFile >> name;  //read the name
        inFile >> testScore1;
        inFile >> testScore2;
        inFile >> testScore3;

       }
    }
    inFile.close();
    outFile.close();
    
    return 0;
}
