#include <iostream>
#include <chrono>
#include <vector>
#include <fstream>
#include <ostream>
#pragma once
using namespace std;


class pointsScoring
{
  public:
  string userData;
  int pointData, yearData, monthData, dayData;
  void toString(int year, int month, int day);
  void logToFile();
  void readData();
  bool isDate(int tempYear,int tempMonth, int tempDay);
  void objCreation(string user, int score, int year, int month, int day);
};
