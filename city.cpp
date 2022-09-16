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
#include <fstream>
#include "fact.h"
using namespace std; 

county * create_counties(int n) {
    county * newCounty = new county();
    cout << "Enter name of county: "; 
    cin >> newCounty->name; 
    cin.clear();
    cin.ignore(1000000, '\n');
    cout << endl;
    newCounty->population = n; 
    
    cout << "Enter number of cities in county: " << endl; 
    cin >> newCounty->cities; 
    cin.clear();
    cin.ignore(1000000, '\n');

    return newCounty; 
}

state * create_states(int) {
  //create state here
}

void get_state_data(state *, int, ifstream &) {

}

bool is_valid_arguments(char *[], int) {


  return true; 
}

void get_county_data(county *, int, ifstream &) {
  
}


int main() {

bool run = true;
char choice[20];

cout << "Would you like to create a state or county?" << endl;
cout << "Enter 0 for state and 1 for county." << endl;

  while (run) {
    cin >> choice;

    

    //storing vector on heap or else segmentation fault. Dont want to use any global vars
    vector <county*> * countyList = new vector<county*>();

    cout << "Enter Command: ";
    cout << "Command List: Add, Delete, Print" << endl; 
    cin >> choice;
    cin.clear();
    cin.ignore(1000000, '\n');

    if (strcmp(choice, "Add") == 0 || strcmp(choice, "add") == 0) {
      cout << '\n';
      cout << "Add County or State?" << endl; 
      cout << "Enter command: ";
      cin >> choice; 
      cin.clear();
      cin.ignore(1000000, '\n');
      if(strcmp(choice, "County") == 0 || strcmp(choice, "county")) {

      else if(choice == 1) {
        int n;
        cout << "Enter the population of this county: "; 
        cin >> n; 
        cin.clear();
        cin.ignore(1000000, '\n');
        if(is_valid_arguments(char **, ))
        county* NC = create_counties(n);  
        countyList->push_back(NC); 
        cout << "County Entered!" << endl;
        
    }
    else {
      cout << "Invalid Input. Enter 0 or 1" << endl;
    }
      }
    }
    else if(choice == 1) {
      int n;
      cout << "Enter the population of this county: "; 
      cin >> n; 
      cin.clear();
      cin.ignore(1000000, '\n');
      if(is_valid_arguments(char **, ))
      county* NC = create_counties(n);  
      countyList->push_back(NC); 
      cout << "County Entered!" << endl;
        
    }
    else {
      cout << "Invalid Input. Enter 0 or 1" << endl;
    }
  }
}
