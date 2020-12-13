#include "pointsScoring.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <ostream>
using namespace std;

/******************************************************************************
Authors: Nathaniel Smith and Ryan Horgan
Date: Finalized 12/13/20
Purpose: A program with a menu system that would be able to read and write to a text file, as well as construct objects of a class and store them in a vector array. This program saves player names, scores, and dates and stores them.
*******************************************************************************/

pointsScoring log;
/* 
Author:Ryan 
Purpose: 
*/
int main() 
{
    vector <pointsScoring> gamers;
    int choice = 0;
    string tempUser;
    int tempScore, tempDay, tempMonth, tempYear, vecCount = 0;

  while(choice != 6)
  {
    cout << "Welcome to No Graphics TF2! Please choose an option:" << endl;
    cout << "[1]Add a player's score" << endl;
    cout << "[2]Save a player's score" << endl;
    cout << "[3]Find a player's score" << endl;
    cout << "[4]High Score" << endl;
    cout << "[5]Quit" << endl;
    cin >> choice;
      
    if(choice == 1)
    {
      cout << "Enter your username: ";
      cin >> tempUser;
      cout << endl;
      cout << "Enter your score: ";
      cin >> tempScore;
      cout << endl;
      cout << "Enter year the score was earned:";
      cin >> tempYear;
      cout << endl;
      cout << "Enter month the score was earned:";
      cin >> tempMonth;
      cout << endl;
      while(tempMonth > 12 && tempMonth < 0)
      {
      cout << "Invalid month. Please enter again:";
      cin >> tempMonth;
      cout << endl;
      }
      cout << "Enter day the score was earned:";
      cin >> tempDay;
      while(tempDay > 31 && tempDay < 0)
      {
      cout << "Invalid day. Please enter again:";
      cin >> tempDay;
      }
      cout << endl;
      log.objCreation(tempUser,tempScore,tempYear,tempMonth,tempDay);
      gamers.push_back(log);
      vecCount++;
      cout << vecCount << endl;
    }
    else if(choice == 2)
    {
      log.logToFile();
    }
    else if(choice == 3)
    {
      cout << "Enter year the score was earned:";
      cin >> tempYear;
      cout << endl;
      cout << "Enter month the score was earned:";
      cin >> tempMonth;
      cout << endl;
      while(tempMonth > 12 && tempMonth < 0)
      {
      cout << "Invalid month. Please enter again:";
      cin >> tempMonth;
      cout << endl;
      }
      cout << "Enter day the score was earned:";
      cin >> tempDay;
      while(tempDay > 31 && tempDay < 0)
      {
      cout << "Invalid day. Please enter again:";
      cin >> tempDay;
      }
      cout << endl;
      for(int i = 0; i < vecCount; i++)
      {
        log.readData();
        if(log.isDate(tempYear, tempMonth, tempDay))
        {
          cout << "Player: " << log.userData << " scored: " <<
          log.pointData << " points" << endl;
          cout << endl;
          break;
        }
        else
        {
          cout << "Invalid input, please try again." << endl;
          break;
        }
      }
    }
    else if(choice == 5)
      {
      cout << "Thank you for running. Goodbye!";
      return 0;
      }
      else
      {
        cout << "Invalid input. Please try again." << endl;
      }
    }
  }
