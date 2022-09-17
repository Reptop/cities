#ifndef FACT_H
#define FACT_H
using namespace std;  

struct county {
string name; //name of county
string *city; // array of city names in county
int cities; //number of cities in county
int population; //total population of county
float avg_income; //avg household income
float avg_house; //avg household price
};

struct state {
string name; //name of state
struct county *c; //array of counties
int counties; //number of counties in state
int population; //total population of state
}; 

bool is_valid_arguments(char *[], int);
state * create_states(int);
void get_state_data(state *, int, ifstream &);
county * create_counties(int);
void get_county_data(county *, int, ifstream &);
void delete_info(state **, int);


#endif

