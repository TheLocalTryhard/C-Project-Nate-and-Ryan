#include <iostream>
#include <fstream>
#include <ostream>
#include "pointsScoring.h"
using namespace std;

  void pointsScoring::objCreation(string user, int score, int year, int month, int day)
  {
    userData = user;
    pointData = score;
    yearData = year;
    monthData = month;
    dayData = day;
  }

  void pointsScoring::readData()
  {
    fstream dataLog;
    dataLog.open("dataLog.txt", ios::out | ios::app);
    dataLog >> userData >> pointData >> monthData >> dayData >> yearData;
    dataLog.close();
  }

  
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

  void pointsScoring::toString(int year, int month, int day)
  {
    cout << "Player " << userData << " scored: " << pointData;
  }
  void pointsScoring::logToFile()
  { 
    ofstream dataLog;
    dataLog.open("dataLog.txt", ios::out | ios::app);
    dataLog << userData << " " << pointData << " " << monthData << " " << dayData << " " << yearData << endl;
    dataLog.close();
  }