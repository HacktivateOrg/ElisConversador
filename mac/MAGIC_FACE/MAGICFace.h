#include <iostream>
#include <string>
using namespace std;

#ifndef MAGICFACE_H
#define MAGICFACE_H

void addAdvanced();
void addCon();
string randResponse(string outLine);

void seedRandom();
int randomInteger(int scale);
int characterDiffNumber(string input, string thing);
int stringDiffNumber(string input, string thing);

char lowerCaseOf(char s);
string stringFrom(string s, int a, int b);
#endif
