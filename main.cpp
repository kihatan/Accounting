//
//  main.cpp
//  Accounting
//
//  Created by Noah Kihata on 10/1/14.
//  Copyright (c) 2014 Noah Kihata. All rights reserved.
//

#include <iostream>
#include <string>
#include "Structs.h"
using namespace std;

void populate();
int parsemain(string foo);
int parsea(string foo);
int parsel(string foo);
int parses(string foo);
void a();
void l();
void s();


int main() {
    int j = 2;
    string command;
    cout << string( 100, '\n');
    
    while (j != 0){
        populate();
        cout << "Which Category would you like to modify?: ";
        cin >> command;
        cout << string( 100, '\n');
        j = parsemain(command);
    }
    
    cout << endl << endl << endl << endl;
    return 0;
}

void populate(){
    cout << "----------------------------------------------------------------------------------------------------" << endl;
    cout << "-Assets                                                                                            -" << endl;
    for(int k = 0; k < 3 ; k++ ){
        k++;
    }
    cout << "-Liabilities                                                                                       -" << endl;
    
    
    
    cout << "-Shareholder's Equity                                                                              -" << endl;
    
    
    
    
    cout << "----------------------------------------------------------------------------------------------------" << endl;
    cout << endl << endl;

}


int parsemain(string foo){
    
    if(foo == "Assets" || foo == "assets" || foo == "asset" || foo == "Asset"){
        cout << "Assets" << endl<<endl;
        a();
        return 1;
    }
    else if(foo == "Liabilities" || foo == "liabilities" || foo == "liability" || foo == "Liability"){
        cout << "Liabilities" << endl<<endl;
        l();
        return 1;
    }
    else if(foo == "SE" || foo == "se"){
        cout << "Shareholder's Equity" << endl<<endl;
        s();
        return 1;
    }
    else if(foo == "help" || foo == "Help"){
        cout << foo << endl;
        cout << "Acceptable commands are:" << endl;
        cout << "   -Assets" << endl;
        cout << "   -Liabilities" << endl;
        cout << "   -SE" << endl;
        cout << "   -Exit" << endl << endl;
        return 1;
    }
    else if(foo == "exit" || foo == "Exit"){
        return 0;
    }
    else{
        cout << "INVALID INPUT: " << foo << endl << "TYPE 'Help' FOR MORE INFORMATION" << endl << endl;
        return 1;
    }

}


void a(){
    string answer;
    int p = 2;
    while(p !=0){
        cout << "What would you like to do?: ";
        cin >> answer;
        cout << string( 100, '\n');
        p = parsea(answer);
    }
}

void l(){
    string answer;
    int p = 2;
    while(p !=0){
        cout << "What would you like to do?: ";
        cin >> answer;
        cout << string( 100, '\n');
        p = parsel(answer);
    }
}

void s(){
    string answer;
    int p = 2;
    while(p !=0){
        cout << "What would you like to do?: ";
        cin >> answer;
        cout << string( 100, '\n');
        parses(answer);
    }
}

int parsea(string foo){
    if(foo == "new" || foo == "New"){
    
        return 1;
    }
    else if(foo == "modify" || foo == "Modify"){
    
        return 1;
    }
    else if(foo == "erase" || foo == "Erase"){
    
        return 1;
    }
    else if(foo == "Exit" || foo == "exit"){
    
        return 0;
    }
    else if(foo == "help" || foo == "Help"){
        cout << "Acceptable Commands are:" << endl;
        cout << "   -Add" << endl;
        cout << "   -Modify" << endl;
        cout << "   -Erase" << endl;
        cout << "   -Exit" << endl << endl;
        return 1;
    }
    else{
        cout << "INVALID INPUT: " << foo << endl << "TYPE 'Help' FOR MORE INFORMATION" << endl << endl;
        return 1;
    }
}



int parsel(string foo){
    if(foo == "new" || foo == "New"){
        
        return 1;
    }
    else if(foo == "modify" || foo == "Modify"){
        
        return 1;
    }
    else if(foo == "erase" || foo == "Erase"){
        
        return 1;
    }
    else if(foo == "Exit" || foo == "exit"){
        
        return 0;
    }
    else if(foo == "help" || foo == "Help"){
        cout << "Acceptable Commands are:" << endl;
        cout << "   -Add" << endl;
        cout << "   -Modify" << endl;
        cout << "   -Erase" << endl;
        cout << "   -Exit" << endl << endl;
        return 1;
    }
    else{
        cout << "INVALID INPUT: " << foo << endl << "TYPE 'Help' FOR MORE INFORMATION" << endl << endl;
        return 1;
    }
}

int parses(string foo){
    if(foo == "new" || foo == "New"){
        
        return 1;
    }
    else if(foo == "modify" || foo == "Modify"){
        
        return 1;
    }
    else if(foo == "erase" || foo == "Erase"){
        
        return 1;
    }
    else if(foo == "Exit" || foo == "exit"){
        
        return 0;
    }
    else if(foo == "help" || foo == "Help"){
        cout << "Acceptable Commands are:" << endl;
        cout << "   -Add" << endl;
        cout << "   -Modify" << endl;
        cout << "   -Erase" << endl;
        cout << "   -Exit" << endl << endl;
        return 1;
    }
    else{
        cout << "INVALID INPUT: " << foo << endl << "TYPE 'Help' FOR MORE INFORMATION" << endl << endl;
        return 1;
    }
}























































