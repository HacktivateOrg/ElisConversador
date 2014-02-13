#include "TextReadWrite.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void write(string fileName, string line)
{
	string old;
	string nline;
	ifstream myfile (fileName);
	if (myfile.is_open())
	{
		while (getline(myfile, nline) )
		{
			old = old + nline + "\n";
		}
		myfile.close();
	}

	ofstream file(fileName);
	if (file.is_open())
	{
		file << old;
		file << line << "\n";
		file.close();
	}
}
void rewriteLine(string fileName, string line, int lineNum)
{
	string old;
	string nline;
	ifstream myfile (fileName);
	if (myfile.is_open())
	{
		old = "";
		for (int i = 0; i < 10000 && getline(myfile, nline); i ++)
		{
			if (i == lineNum)old += line + "\n";
			else old = old + nline + "\n";
		}
		myfile.close();
	}

	ofstream file(fileName);
	if (file.is_open())
	{
		file << old;
		file.close();
	}
}
void insertLine(string fileName, string line, int lineNum)
{
	string old;
	string nline;
	ifstream myfile (fileName);
	if (myfile.is_open())
	{
		old = "";
		for (int i = 0; i < 10000 && getline(myfile, nline); i ++)
		{
			old = old + nline + "\n";
			if (i == lineNum)old += line + "\n";
		}
		myfile.close();
	}

	ofstream file(fileName);
	if (file.is_open())
	{
		file << old;
		file.close();
	}
}
void addToLine(string fileName, string line, int lineNum)
{
	string old;
	string nline;
	ifstream myfile (fileName);
	if (myfile.is_open())
	{
		old = "";
		for (int i = 0; i < 10000 && getline(myfile, nline); i ++)
		{
			old = old + nline + "\n";
			if (i == lineNum)old += line + "\n";
		}
		myfile.close();
	}

	ofstream file(fileName);
	if (file.is_open())
	{
		file << old;
		file.close();
	}
}
string read(string fileName, int line)
{
	string old = "Line cannot be read.";
	string nline;
	ifstream myfile (fileName);
	if (myfile.is_open())
	{
		old = "";
		for (int i = 0; i <= line && getline(myfile, nline); i ++)
		{
			old = nline;
		}
		myfile.close();
	}
	return old;
}
int numLines(string fileName)
{
	string old = "Line cannot be read.";
	string nline;
	int a;
	ifstream myfile (fileName);
	if (myfile.is_open())
	{
		old = "";
		for (a = 0; getline(myfile, nline); a ++){}
		myfile.close();
	}
	return a;
}
void clear(string fileName)
{
	ofstream file(fileName);
	if (file.is_open())
	{
		file << "";
		file.close();
	}
}
void removeCHID(string fileName, string toRemove)
{
	string old;
	string nline;
	ifstream myfile (fileName);
	if (myfile.is_open())
	{
		old = "";
		for (int i = 0; i < 10000 && getline(myfile, nline); i ++)
		{
			if (nline != toRemove) old = old + nline + "\n";
		}
		myfile.close();
	}

	ofstream file(fileName);
	if (file.is_open())
	{
		file << old;
		file.close();
	}
}
