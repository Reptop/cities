/******************************************************
** Program: city.cpp
** Author: Raed Kabir
** Date: 04/08/2017
** Description: This program compares city and county information 
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
    
    cout << "Enter name of county: "; 
    cin >> newCounty->name; 
    cin.clear();
    cin.ignore(1000000, '\n');
    cout << endl;  
    
    //cin >> newCounty->city; 
    //cin.clear();
    //cin.ignore(1000000, '\n');
   
    cout << "Enter number of cities in county: " << endl; 
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
    vector <county*>* countyList = new vector<county*>();


    cout << "Enter Command: ";
    cin >> choice;
    cin.clear();
    cin.ignore(1000000, '\n');

    if (choice == 0) {
        cout << '\n';
        //create_states(0); // this 0 is a placeholder for now
         
    }
    else if(choice == 1) {
        county* NC = create_counties(0);  
        countyList->push_back(NC); 
        cout << "County Entered!" << endl;
        
    }
    else {
      cout << "Invalid Input. Enter 0 or 1" << endl;
    }
  }
}
