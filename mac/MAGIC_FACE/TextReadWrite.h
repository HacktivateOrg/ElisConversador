#include <iostream>
#include <string>
#include "MAGICFace.h"
using namespace std;

#ifndef TEXT_READ_WRITE_H
#define TEXT_READ_WRITE_H

void write(string fileName, string line);
void rewriteLine(string fileName, string line, int lineNum);
void addToLine(string fileName, string line, int lineNum);
void insertLine(string fileName, string line, int lineNum);
string read(string fileName, int line);
int numLines(string fileName);
void clear(string fileName);
void removeCHID(string fileName, string toRemove);
#endif