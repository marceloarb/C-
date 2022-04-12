//
//  main.cpp
//  marcelobarbosa-assignment7
//
//  Created by Marcelo Barbosa on 4/08/22.
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <iostream>
using namespace std;

long CountInString(string S1, string S2){
    //Declaring variable
    long count = 0;
    long Pos = -1;
    
    //Implemented loop to calculate String S1 in String S2
    do{
        //Searching for S1 in S2
        Pos = S2.find(S1,Pos+1);
        
        //Declaring statement
        if(Pos != string::npos){
            
            //Output message
            cout << "\n" << S1 << " is at position "<< Pos << " in " << S2;
            
            //Increasing variable
            count++;
        }
    }
    //Implemented loop to calculate String S1 in String S2
    while(Pos != string::npos);
    
    //Declaring statement
    if(count == 0){
        //Output message
        cout << "\n" << S1 << " is not in " << S2;
    }
    else{
        //Output message
        cout << "\n" << S1 << " is in " << S2 << "\n" << count << " times"<< "\n";
    }
    //return statement
    return count;
}

long CountInFile(string S){
    //Declaring variable
    long countLine = 0;
    ifstream inFile;
    string line;
    
    //Opening Data file
    inFile.open("/Users/marcelobarbosa/Desktop/ProgrammingFundamentals1/C-/marcelobarbosa-assignment7/marcelobarbosa-assignment7/DataFile.txt");
    
    //Added statement condition to check if the file was open.
        if (!inFile){
            cout << "Cannot open input file. Program terminates!\n"; return EXIT_FAILURE;
        }
    //Implemented loop to get all the data in the file.
    while(getline(inFile, line)){
        
        //calculating how many lines there are in the file
        countLine++;
        
        //Calling function
        CountInString(S, line);
    }
    //Close files
    inFile.close();
    
    //Output message
    cout << "\n" << "Number of lines in the file: " << countLine;
    //Returning Statement
    return countLine;
}

int main(int argc, const char * argv[]) {
    
    //Calling functions
    CountInString("S", "Silvia Silveria");
    CountInFile("Computer Science");
    CountInFile("Programming");
    CountInFile("C++");
    CountInFile("COSC");
    CountInFile("Computer Science");

    return 0;
}
