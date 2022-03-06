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
    ofstream outFile;
    inFile.open("/Users/marcelobarbosa/Desktop/ProgrammingFundamentals1/Assignment5/Data.txt");
    string name;
    float testScore1;
    float testScore2;
    float testScore3;
    float sum;
    string grade;
    if (!inFile)
    {
    cout << "Cannot open input file. Program terminates!\n"; return 1;
    }
    
    outFile.open("/Users/marcelobarbosa/Desktop/ProgrammingFundamentals1/Assignment5/Data.out");

    outFile << fixed << showpoint << setprecision(2);

    inFile >> name;  //read the name
    inFile >> testScore1;
    inFile >> testScore2;
    inFile >> testScore3;   //read the test score
//    outFile << name << testScore;
    while (sum < 10){
//        sum = sum + testScore; //update sum
        sum++;
//        switch (static_cast<int> (testScore) / 10){
//        case 5:
//            grade = 'F';
//            break;
//        case 6:
//            grade = 'D';
//            break;
//        case 7:
//                grade = 'C';
//            break;
//        case 8:
//            grade = 'B';
//            break;
//        case 10: grade = 'A';
//            break;
//        default: cout << "Invalid score." << endl;

        outFile << left << setw(12) << name
        << setw(12) << testScore1
        << setw(12) << testScore2
        << setw(12) << testScore3 << endl;

//       }
    }
    inFile.close();
    outFile.close();
    
    return 0;
}
