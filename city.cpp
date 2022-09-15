/******************************************************
** Program: city.cpp
** Author: Raed Kabir
** Date: 04/08/2017
** Description: This program 
** Input:
** Output:
******************************************************/

#include <iostream>
#include <cstring>
#include <vector>
#include "fact.h"
using namespace std; 

county* create_counties(int) {
    county* newCounty = new county();

    cin >> newCounty->name; 
    cin.clear();
    cin.ignore(1000000, '\n');

    //cin >> newCounty->city; 
    //cin.clear();
    //cin.ignore(1000000, '\n');
    
    cin >> newCounty->cities; 
    cin.clear();
    cin.ignore(1000000, '\n');

    return newCounty; 
}



int main() {

bool run = true; 

cout << "Would you like to create a state or county?" << endl;
cout << "Enter 0 for state and 1 for county." << endl;

  while (run) {
    int choice;
    vector <county*>* countyList; 


    cout << "Enter Input: ";
    cin >> choice;
    cin.clear();
    cin.ignore(1000000, '\n');

    if (choice == 0) {
        cout << '\n';
       // create_states(int);
         
    }
    else if(choice == 1) {
        //create_states(int); 
    }
    else {
      cout << "Invalid Input. Enter 0 or 1" << endl;
    }
  }
}
