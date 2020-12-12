#include "pointsScoring.h"
#include <iostream>
#include <fstream>
#include <ostream>
using namespace std;
#define SIZE 76
/******************************************************************************
Authors: Nathaniel Smith and Ryan Horgan
Date: Finalized 12/9/20
Purpose:
*******************************************************************************/

int hashIt();
/* 
Author:Ryan 
Purpose: 
*/
int main() 
{
    
    vector <pointsScoring> users[SIZE];
    pointsScoring log;
    int choice = 0;
    string tempUser;
    int tempScore, tempDay, tempMonth, tempYear;

  while(choice != 6)
  {
    cout << "Welcome to No Graphics TF2! Please choose an option:" << endl;
    cout << "[1]Add a player's score" << endl;
    cout << "[2]Save a player's score" << endl;
    cout << "[3]Find a player's score" << endl;
    cout << "[4]High Score" << endl;
    cout << "[5]Run all" << endl;
    cout << "[6]Quit" << endl;
    cin >> choice;
      
    if(choice == 1)
    {
      cout << "Enter your username: ";
      cin >> tempUser;
      cout << endl;
      cout << "Enter your score: ";
      cin >> tempScore;
      cout << endl;
      cout << "Enter year entered:";
      cin >> tempYear;
      cout << endl;
      cout << "Enter month entered:";
      cin >> tempMonth;
      cout << endl;
      cout << "Enter day entered:";
      cin >> tempDay;
      cout << endl;
      log.objCreation(tempUser, tempScore,tempYear,tempMonth,tempDay);
      users.push_back(log);
    }
    else if(choice == 2)
    {
      log.logToFile();
    }
    else if(choice == 3)
    {
      
    }
    else if(choice == 4)
    {
     
    }
    else if(choice == 5)
    {

    }
    else if(choice == 6)
    {
      cout << "Thank you for running. Goodbye!";
      log.logToFile();
      return 0;
    }
  }
}
  
  int hashIt()
  {
    unsigned long key;
    
    
    
    return 0;
  } 