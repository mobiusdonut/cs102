//Program: movie_theater.cpp
//Author: Ravi Kini
//Online class: cs102
//Semester: Spring 2016
//Description: calculates a theater's gross and net box office profit for a night

#include<iostream>

using namespace std;

int main() {
string movie_name; 
double gross_profit, net_profit, remainder_paid; 
double adult = 6.00; 
double child = 3.00; 

cout << " Movie Name:       "; 
getline(cin, movie_name ); 
cout << "Adult Tickets Sold: "; 
cin >> adult; 
if (cin.fail()) { 
        cout << endl << "Number of adults must be a number." << endl; 
        exit(0); 
                } 
cout << " Child Tickets Sold: "; 
cin >> child; 
if (cin.fail()) { 
       cout << endl << "Number of children must be a number." << endl; 
       exit(0); 
               }

}