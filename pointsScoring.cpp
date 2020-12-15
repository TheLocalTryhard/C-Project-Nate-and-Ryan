#include <iostream>
#include <fstream>
#include <ostream>
#include "pointsScoring.hpp"
using namespace std;

/* 
Author: Nate
Purpose: 
*/
  void pointsScoring::objCreation(string user, int score, int year, int month, int day)
  {
    userData = user;
    pointData = score;
    yearData = year;
    monthData = month;
    dayData = day;
  }
/* 
Author: Nate
Purpose: Reads data from user input, opens and closes file dataLog.txt
*/
  void pointsScoring::readData()
  {
    fstream dataLog;
    dataLog.open("dataLog.txt", ios::out | ios::app);
    dataLog >> userData >> pointData >> monthData >> dayData >> yearData;
    dataLog.close();
  }

/* 
Author: Ryan
Purpose: Takes date data and verifies that it matches
*/  
  bool pointsScoring::isDate(int tempYear, int tempMonth, int tempDay)
  {
    fstream dataLog;
    while(!dataLog.eof())
    { 
      if((tempYear == yearData) && (tempMonth == monthData) && (tempDay == dayData))
      return true;    
    }
    return false;
  }
/* 
Author: Ryan
Purpose: Prints players data with date
*/
  void pointsScoring::toString(int year, int month, int day)
  {
    cout << "Player " << userData << " scored: " << pointData;
  }
/* 
Author: Nate
Purpose: Logs user data to file dataLog.txt
*/
  void pointsScoring::logToFile()
  { 
    ofstream dataLog;
    dataLog.open("dataLog.txt", ios::out | ios::app);
    dataLog << userData << " " << pointData << " " << monthData << " " << dayData << " " << yearData << endl;
    dataLog.close();
  }