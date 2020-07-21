#include <iostream>
int askForInt(std::string message);
double askForDouble(std::string message);
int askForChar(std::string message);
int print(std::string message);
int printError(std::string message);
void setPrecision(int precision);
void setScientific();
bool areEqual(double a, double b);
void printResult(bool resultOk);
void printBanner(std::string message);