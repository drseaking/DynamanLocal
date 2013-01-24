#pragma once

#ifdef DEBUG
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
ofstream logger("debugLog.txt", ios::out);

void log(string s) 
{
  if (!logger) {cout<< "Error: Logger Offline"; return;}
  logger << s << endl;
  logger.flush();
}
#endif
#ifndef DEBUG
#include <string>
public static void log(std::string s) {}
#endif
