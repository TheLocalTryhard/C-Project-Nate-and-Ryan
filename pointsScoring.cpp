#include <iostream>
#include <fstream>
#include <ostream>
#include "pointsScoring.h"
using namespace std;

  void pointsScoring::readData()
  {
    //fstream dataLog;
    //dataLog.open("dataLog.txt", ios::out | ios::app);
    //dataLog.get("dataLog.txt") >> userData >> pointData;
    //dataLog.close();
  }

  void pointsScoring::objCreation(string user, int score, int year, int month, int day)
  {
    userData = user;
    pointData = score;
    yearData = year;
    monthData = month;
    dayData = day;
  }

  void pointsScoring::logToFile()
  { 
    ofstream dataLog;
    dataLog.open("dataLog.txt", ios::out | ios::app);
    dataLog << userData << " "; 
    dataLog << pointData << " ";
    dataLog << monthData << dayData << yearData << endl;
    dataLog.close();
  }