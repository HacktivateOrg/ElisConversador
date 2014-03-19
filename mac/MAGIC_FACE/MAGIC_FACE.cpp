// MAGIC_FACE.cpp : Defines the entry point for the console application.
//Stylus Technology
/*

MAGICFace is a learning AI. It is based on an active learning algorythm that learns from all conversations. The
current version is 6.1.

MAGICFace is part of Stylus Technology's MAGICRing project.

Mathematical Analysis Grants Increased Comprehension.

*/

#include <iostream>
#include "TextReadWrite.h"
#include "MAGICFace.h"
#include <ctime>
#include <ctype.h>
#include <locale>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
	seedRandom();
	addAdvanced();
	//addCon();
	//removeCHID(data, "<-");

	cin.get();
	cin.ignore(80, '\n');
	return 0;
}
void addCon()
{
	string data = "data.txt";
	int limit = numLines(data);
	string input = "";
	string output = "";
	while (input != "exit")
	{
		getline(cin, input);
		getline(cin, output);
		write(data, input);
		write(data, output);
	}
}
void addAdvanced()
{
	string data = "data.txt";
	string input = "";
	string output = "";
	
	ifstream myfile(data);
	int conLength = 5;
	while(input != "exit")
	{
		int limit = numLines(data);
		getline(cin, input);
		//system("cls");
		int tolerance = 0;
		bool matchFound = false;
		while(tolerance < 100 && !matchFound)
		{
			for (int i = 0; i < limit; i ++)
			{
				string matchA = read(data, i);
				if (characterDiffNumber(input, matchA) <= tolerance)
				{
					output = read(data, i + 1);
					matchFound = true;
					break;
				}
			}
			tolerance ++;
		}
		if (matchFound)
		{
			cout << output << endl;
			write(data, input);
			write(data, output);
		}
	}
}
int characterDiffNumber(string input, string thing)
{
	//eliminate spaces:
	string ninput;
	for (int i = input.length() - 1; i >= 0; i --)
	{
		if (input[i] != ' ' && input[i] != '.' && input[i] != ',' && input[i] != ':' && input[i] != ';')
		{
			char at = lowerCaseOf(input[i]);
			ninput = ninput + at;
		}
	}
	string nthing;
	for (int i = thing.length() - 1; i >= 0; i --)
	{
		if (thing[i] != ' ' && thing[i] != '.' && thing[i] != ',' && thing[i] != ':' && thing[i] != ';')
		{
			char at = lowerCaseOf(thing[i]);
			nthing = nthing+ at;
		}
	}
	int limit;
	if (ninput.length() < nthing.length()) limit = ninput.length();
	else limit = nthing.length();
	int diffNum = 0;
	for (int i = 0; i < limit; i ++)
	{
		if (nthing[i] != ninput[i]) diffNum ++;
	}
	int diff = ninput.length() - nthing.length();
	if (diff < 0) diff = -diff;
	diffNum += diff;
	return diffNum;
}
void seedRandom()
{
	srand(time(0));
}
int randomInteger(int scale)
{
	if (scale == 0) return 0;
	return rand() % scale;
}