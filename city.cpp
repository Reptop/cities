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
#include <iterator>
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

    newCounty->population = n;

    cout << "Enter number of cities in county: " << endl;
    cin >> newCounty->cities;
    cin.clear();
    cin.ignore(1000000, '\n'); 

    cout << "Enter average household income: " << endl;
    cin >> newCounty->avg_income;
    cin.clear();
    cin.ignore(1000000, '\n');
    return newCounty;

    cout << "Enter average household price: " << endl;
    cin >> newCounty->avg_income;
    cin.clear();
    cin.ignore(1000000, '\n');
    return newCounty;

    cout << "Enter average household income: " << endl;
    cin >> newCounty->avg_house;
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
char choice1[20];

//storing vector on heap or else segmentation fault. Dont want to use any global vars
vector <county*> * countyList = new vector<county*>();

cout << "This program compares city and county information" << endl;
cout << "Command List: Add, Delete, Print" << endl;

while (run) {
  cout << "Enter Command: ";
  cin >> choice;
  cin.clear();
  cin.ignore(1000000, '\n');

  if (strcmp(choice, "Add") == 0 || strcmp(choice, "add") == 0) {
    cout << '\n';
    cout << "Add County or State?" << endl;
    cin >> choice1;
    cin.clear();
    cin.ignore(1000000, '\n');

    if(strcmp(choice, "County") == 0 || strcmp(choice, "county")) {
      int n;
      cout << "Enter the population of this county: ";
      cin >> n;
      cin.clear();
      cin.ignore(1000000, '\n');
      //if(is_valid_arguments(char **, ))
      county* NC = create_counties(n);
      countyList->push_back(NC);
      cout << "County Entered!" << endl;
      }
    }
  
    else if (strcmp(choice, "Get") || strcmp(choice, "get")) {
      for (vector<county*>::iterator iter = countyList->begin(); iter != countyList->end(); ++iter) {
        //prob stream everything using this loop into the txt 
      }
    }
    else if (strcmp(choice, "Print") || strcmp(choice, "print")) {
      for (vector<county*>::iterator iter = countyList->begin(); iter != countyList->end(); ++iter) {
        cout << "NAME: " << (*iter)->name << endl;
        cout << "POPULATION : " << (*iter)->population << endl;
        cout << "# of CITIES: " << (*iter)->cities << endl; 
      }
    }
  }
}

