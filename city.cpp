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

    cout << "Enter average household price: " << endl;
    cin >> newCounty->avg_house;
    cin.clear();
    cin.ignore(1000000, '\n');

    return newCounty;
}

state * create_states(int n) {
  //create state here

    state * newState = new state();
    cout << "Enter name of state: ";
    cin >> newState->name;
    cin.clear();
    cin.ignore(1000000, '\n');

    newState->population = n;

    cout << "Enter number of counties: " << endl;
    cin >> newState->counties;
    cin.clear();
    cin.ignore(1000000, '\n');

    return newState;
}

void get_state_data(state *, int, ifstream &) {

}

bool is_valid_arguments(char *[], int) {


  return true;
}

void get_county_data(county *, int, ifstream &) {

}

int main() {
char choice[20];
char choice1[20];

//storing vector on heap or else segmentation fault. Dont want to use any global vars
vector <county*> * countyList = new vector<county*>();
vector <state*> * stateList = new vector<state*>();

cout << "This program compares city and county information" << endl;
cout << "Command List: Add, Delete, Print, Quit" << endl;

for (;;) {
  cout << "Enter Command: ";
  cin >> choice;
  cin.clear();
  cin.ignore(1000000, '\n');

  if (strcmp(choice, "Add") == 0 || strcmp(choice, "add") == 0) {
    cout << '\n';
    cout << "Add County or State?" << endl; cout << "<< ";
    cin >> choice1;
    cin.clear();
    cin.ignore(1000000, '\n');

    if(strcmp(choice1, "County") == 0 || strcmp(choice1, "county") == 0) {
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
    else if(strcmp(choice, "State") == 0 || strcmp(choice, "state") == 0)
      cout << "Enter the population of this state: ";
      int c;
      cin >> c;
      cin.clear();
      cin.ignore(1000000, '\n');
      //if(is_valid_arguments(char **, ))
      state* NS = create_states(c);
      stateList->push_back(NS);
      cout << "State Entered!" << endl;
}

else if (strcmp(choice, "Print") == 0 || strcmp(choice, "print") == 0) {
    for (vector<county*>::iterator iter = countyList->begin(); iter != countyList->end(); ++iter) {
        cout << "NAME: " << (*iter)->name << endl;
        cout << "POPULATION : " << (*iter)->population << endl;
        cout << "# of CITIES: " << (*iter)->cities << endl;
        cout << "AVERAGE HOUSEHOLD INCOME: " << (*iter)->avg_income << endl;
        cout << "AVERAGE HOUSEHOLD PRICE: " << (*iter)->avg_house << endl;
        cout << '\n'; 
      }
    }
else if (strcmp(choice, "Get") == 0 || strcmp(choice, "get") == 0) {
  //ofstream outFile.open("my_file.txt", std::ios_base::app); // append instead of overwrite
  ofstream outFile;
  //ofstream outFile("my_file.txt");
  outFile.open("my_file.txt", std::ios_base::app); // append instead of overwrite
  for (vector<county*>::iterator iter = countyList->begin(); iter != countyList->end(); ++iter) {
    //prob stream everything using this loop into the txt
      outFile << "NAME: " << (*iter)->name << endl;
      outFile << "POPULATION : " << (*iter)->population << endl;
      outFile << "# of CITIES: " << (*iter)->cities << endl;
      outFile << "AVERAGE HOUSEHOLD INCOME: " << (*iter)->avg_income << endl;
      outFile << "AVERAGE HOUSEHOLD PRICE: " << (*iter)->avg_house << endl;
      outFile << '\n';
    }
  cout << "Text file created" << endl;
}
else if (strcmp(choice, "Delete") == 0 || strcmp(choice, "delete") == 0) {
  char n[15];
  cout << "Delete by county or state name?" << endl; cout << "<< "; 
  cin >> n;
  cin.clear();
  cin.ignore(1000000, '\n');

  if(strcmp(n, "County") == 0 || strcmp(n, "county") == 0) {
    if (countyList->empty()) {
      cout << "There are no counties to delete" << endl;
    }
  else {
      cout << "There are counties to delete, just testing this stuff" << endl;
    }
  }
}
  else if (strcmp(choice, "Quit") == 0 || strcmp(choice, "quit") == 0) {
    break;
  }
  else {
    cout << "Invalid input" << endl;
    cout << "Input county or State" << endl;
    cout << '\n';
    }
  }
}

