
//  main.cpp
//  marcelobarbosa-assignment6
//
//  Created by Marcelo Barbosa on 3/25/22.
//

#include <iostream>
#include <iomanip>
using namespace std;

void function4(int n){
    cout << "Number entered was: " << n << "\n";
}

int function1(){
    int n;
    cout << "Enter an integral number: ";
    cin >> n;
    return n;
}

void function2(int n){
    cout << "Enter an integral number that will be used as reference parameter: ";
    
    cin >> n;
    
    function4(n);
}

int function3(int m){
    int n3 = 0;
    
    while(n3<m){
        cout << "Enter an integral number that is higher than: " << m << "\n";
        cin >> n3;
        if(n3>m){
            break;
        }
    }
    return n3;
}


void function5(int m,int n){
    
    while(m<n || n<m){
        if(m<n){
            n = n - 1;
            if(n != m){
                cout << n << " ";
            }
        }
        else if(n<m){
            m = m - 1;
            if(n != m){
                cout << m << " ";
            }
        }
    }
    cout << " These are the number between the numbers M and N given as parameters." << "\n";
}


int main(int argc, const char * argv[]) {
    
    int n1;
    int n2;
    int n3;
    
    n1 = function1();
    
    function4(n1);
    
    function2(n2);
    
    n2 = 20;
    
    n3 = function3(n2);
    
    function4(n3);
    
    function5(10, 5);
    
    
    
    return 0;
}

