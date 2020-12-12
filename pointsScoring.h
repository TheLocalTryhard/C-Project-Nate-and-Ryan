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
  void strSetter(string userInput);
  void pointSetter(int pointInput);
  void logToFile();
  void userTable();
  void readData();
  void numTable();
  void objCreation(string user, int score, int year, int month, int day);
};
